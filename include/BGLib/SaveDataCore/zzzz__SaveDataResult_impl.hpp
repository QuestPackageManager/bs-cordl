#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/SaveDataResult.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::SaveDataCore::SaveDataResult::SaveDataResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::SaveDataCore::SaveDataResult::SaveDataResult() {}
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::OK_NoFileLoaded{ static_cast<int32_t>(0xfffffffe) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::OK_NotDirty{ static_cast<int32_t>(0xffffffff) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::GenericError{ static_cast<int32_t>(0x64) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::UnknownLoaderState{ static_cast<int32_t>(0x65) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::FailedToLoadOrDeserialize{ static_cast<int32_t>(0xc8) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::SynchronousLoadAlreadyInLoadingState{ static_cast<int32_t>(0xc9) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::AsyncLoadStateButNoTask{ static_cast<int32_t>(0xca) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::UpdateMethodDoesNotExist{ static_cast<int32_t>(0xcb) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::UpdateMethodFailed{ static_cast<int32_t>(0xcc) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::CriticalPostLoadStepFailed{ static_cast<int32_t>(0xcd) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::LoadingNotCompleted{ static_cast<int32_t>(0x12c) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::NoInstanceToSave{ static_cast<int32_t>(0x12d) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::AttemptedAccessWhileUnloaded{ static_cast<int32_t>(0x190) };
constexpr ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataResult::AttemptedReloadWhileLoading{ static_cast<int32_t>(0x191) };
