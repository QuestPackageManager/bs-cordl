#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)(::GlobalNamespace::GameServersFilter*, bool)>(
    &::GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x22e1ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameServersFilter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)(
    ::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::SongPackMask, bool)>(&::GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x22ce74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)()>(&::GlobalNamespace::GameServersFilterText::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22e213c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServersFilterText::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServersFilterText::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::GameServersFilterText::__set__text(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::GameServersFilterText::__get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& GlobalNamespace::GameServersFilterText::__get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::GameServersFilterText::__set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GameServersFilterText::__get__stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& GlobalNamespace::GameServersFilterText::__get__stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr void GlobalNamespace::GameServersFilterText::__set__stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameServersFilterText::Setup(::GlobalNamespace::GameServersFilter* filter, bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameServersFilter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter, visible);
}
inline void GlobalNamespace::GameServersFilterText::Setup(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDifficultyMask, songPackMask, visible);
}
inline ::GlobalNamespace::GameServersFilterText* GlobalNamespace::GameServersFilterText::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServersFilterText*>());
}
inline void GlobalNamespace::GameServersFilterText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServersFilterText::GameServersFilterText() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
