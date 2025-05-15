#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResultsAnalyticsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsAnalyticsHelper_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.FillEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::GlobalNamespace::LevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData)> {
  constexpr static std::size_t size = 0x824;
  constexpr static std::size_t addrs = 0x3acb4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(), "FillEventData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(), "FillEventData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, levelCompletionResults, eventData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::LevelCompletionResultsAnalyticsHelper() {}
