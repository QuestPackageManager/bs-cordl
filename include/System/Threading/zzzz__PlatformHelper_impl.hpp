#pragma once
// IWYU pragma private; include "System/Threading/PlatformHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__PlatformHelper_def.hpp"
//  Writing Method size for method: ::System::Threading::PlatformHelper.get_ProcessorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Threading::PlatformHelper::get_ProcessorCount)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3e51670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get(),
                                                                               "get_ProcessorCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Threading::PlatformHelper::setStaticF_s_processorCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::PlatformHelper::getStaticF_s_processorCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get>();
}
inline void System::Threading::PlatformHelper::setStaticF_s_lastProcessorCountRefreshTicks(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_lastProcessorCountRefreshTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Threading::PlatformHelper::getStaticF_s_lastProcessorCountRefreshTicks() {
  return ::cordl_internals::getStaticField<int32_t, "s_lastProcessorCountRefreshTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get>();
}
inline void System::Threading::PlatformHelper::setStaticF_IsSingleProcessor(bool value) {
  ::cordl_internals::setStaticField<bool, "IsSingleProcessor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get>(std::forward<bool>(value));
}
inline bool System::Threading::PlatformHelper::getStaticF_IsSingleProcessor() {
  return ::cordl_internals::getStaticField<bool, "IsSingleProcessor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get>();
}
inline int32_t System::Threading::PlatformHelper::get_ProcessorCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper*>::get(), "get_ProcessorCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::PlatformHelper::PlatformHelper() {}
