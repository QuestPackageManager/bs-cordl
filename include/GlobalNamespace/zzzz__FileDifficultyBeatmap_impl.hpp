#pragma once
// IWYU pragma private; include "GlobalNamespace/FileDifficultyBeatmap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileDifficultyBeatmap_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileDifficultyBeatmap::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::FileDifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2696a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileDifficultyBeatmap::*)()>(
    &::GlobalNamespace::FileDifficultyBeatmap::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2696a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                               "GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileDifficultyBeatmap::*)()>(
    &::GlobalNamespace::FileDifficultyBeatmap::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2696b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                               "GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetBeatmapString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileDifficultyBeatmap::*)()>(
    &::GlobalNamespace::FileDifficultyBeatmap::GetBeatmapString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2696bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                               "GetBeatmapString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetLightshowString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileDifficultyBeatmap::*)()>(
    &::GlobalNamespace::FileDifficultyBeatmap::GetLightshowString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2696c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                               "GetLightshowString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__beatmapPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapPath;
}
constexpr ::StringW const& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__beatmapPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapPath;
}
constexpr void GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_set__beatmapPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__lightshowPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowPath;
}
constexpr ::StringW const& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__lightshowPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowPath;
}
constexpr void GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_set__lightshowPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightshowPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::FileDifficultyBeatmap* GlobalNamespace::FileDifficultyBeatmap::New_ctor(::StringW beatmapPath, ::StringW lightshowPath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileDifficultyBeatmap*>(beatmapPath, lightshowPath));
}
inline void GlobalNamespace::FileDifficultyBeatmap::_ctor(::StringW beatmapPath, ::StringW lightshowPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapPath, lightshowPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileDifficultyBeatmap::GetBeatmapStringAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                             "GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileDifficultyBeatmap::GetLightshowStringAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                             "GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileDifficultyBeatmap::GetBeatmapString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                             "GetBeatmapString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileDifficultyBeatmap::GetLightshowString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileDifficultyBeatmap*>::get(),
                                                                             "GetLightshowString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileDifficultyBeatmap::FileDifficultyBeatmap() {}
