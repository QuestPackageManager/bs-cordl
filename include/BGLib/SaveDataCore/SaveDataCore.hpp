#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BGLib/SaveDataCore/ISaveDataHandler.hpp"
#include "BGLib/SaveDataCore/ISerializableSaveData.hpp"
#include "BGLib/SaveDataCore/LoaderState.hpp"
#include "BGLib/SaveDataCore/SaveDataFlushingService.hpp"
#include "BGLib/SaveDataCore/SaveDataHandler_1.hpp"
#include "BGLib/SaveDataCore/SaveDataResult.hpp"
#include "BGLib/SaveDataCore/SaveDataResultExtensions.hpp"
#include "BGLib/SaveDataCore/VersionableSaveData.hpp"
#ifdef __cpp_modules
export module SaveDataCore;
#endif
