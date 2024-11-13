#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AchievementProgressList.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementProgressList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AchievementProgressList::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::AchievementProgressList::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3f2d898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementProgressList*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::Models::AchievementProgressList::New_ctor(::System::IntPtr a) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AchievementProgressList*>(a));
}
inline void Oculus::Platform::Models::AchievementProgressList::_ctor(::System::IntPtr a) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementProgressList*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AchievementProgressList::AchievementProgressList() {}
