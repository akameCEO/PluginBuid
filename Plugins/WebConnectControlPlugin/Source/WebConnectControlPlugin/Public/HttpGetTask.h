#pragma once

#include "CoreMinimal.h"
#include "Async/AsyncWork.h"

class FHttpGetTask : public FNonAbandonableTask
{
    friend class FAutoDeleteAsyncTask<FHttpGetTask>;

private:
    FString Url;

    FHttpGetTask(const FString& InUrl) : Url(InUrl) {}

    void DoWork();

    FORCEINLINE TStatId GetStatId() const
    {
        RETURN_QUICK_DECLARE_CYCLE_STAT(FHttpGetTask, STATGROUP_ThreadPoolAsyncTasks);
    }
};
