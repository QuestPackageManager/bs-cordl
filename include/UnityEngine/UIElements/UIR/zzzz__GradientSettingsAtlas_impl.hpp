#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture.WriteRawInt2Packed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::WriteRawInt2Packed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e8af7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture>::get(), "WriteRawInt2Packed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture.WriteRawFloat4Packed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::*)(
    float_t, float_t, float_t, float_t, int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::WriteRawFloat4Packed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e8aed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture>::get(), "WriteRawFloat4Packed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::WriteRawInt2Packed(int32_t v0, int32_t v1, int32_t destX, int32_t destY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture>::get(), "WriteRawInt2Packed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v0, v1, destX, destY);
}
inline void UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::WriteRawFloat4Packed(float_t f0, float_t f1, float_t f2, float_t f3, int32_t destX, int32_t destY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture>::get(), "WriteRawFloat4Packed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, f0, f1, f2, f3, destX, destY);
}
// Ctor Parameters [CppParam { name: "rgba", ty: "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "width", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::__GradientSettingsAtlas__RawTexture(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> rgba,
                                                                                                                   int32_t width, int32_t height) noexcept {
  this->rgba = rgba;
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture::__GradientSettingsAtlas__RawTexture() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8a744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "get_length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8a74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "get_disposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8a754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "set_disposed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e8a760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e8a7cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e8a844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2e8a874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8a940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "get_atlas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Alloc (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Add)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e8a948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "Add",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(
    ::UnityEngine::UIElements::UIR::Alloc, ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*>,
    ::UnityEngine::UIElements::UIR::GradientRemap*)>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Write)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x2e8aa34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::GradientRemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_MustCommit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_MustCommit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8b004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "get_MustCommit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.set_MustCommit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_MustCommit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8b00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "set_MustCommit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Commit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Commit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e8b018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "Commit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.PrepareAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::PrepareAtlas)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2e8b07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                               "PrepareAtlas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::GradientSettingsAtlas::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Length;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Length;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_Length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Length = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_ElemWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElemWidth;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_ElemWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElemWidth;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_ElemWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElemWidth = value;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_Allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Allocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Texture2D*& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_Atlas(::UnityEngine::Texture2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Atlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_RawAtlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RawAtlas;
}
constexpr ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_RawAtlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RawAtlas;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_RawAtlas(::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RawAtlas = value;
}
constexpr bool& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get__MustCommit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MustCommit_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get__MustCommit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MustCommit_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set__MustCommit_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MustCommit_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::setStaticF_s_MarkerWrite(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerWrite",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::GradientSettingsAtlas::getStaticF_s_MarkerWrite() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerWrite",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get>();
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::setStaticF_s_MarkerCommit(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerCommit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::GradientSettingsAtlas::getStaticF_s_MarkerCommit() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerCommit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get>();
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::setStaticF_s_TextureCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_TextureCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::getStaticF_s_TextureCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_TextureCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get>();
}
inline int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "get_length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "get_disposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "set_disposed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
/// @param length: int32_t (default: static_cast<int32_t>(0x1000))
inline ::UnityEngine::UIElements::UIR::GradientSettingsAtlas* UnityEngine::UIElements::UIR::GradientSettingsAtlas::New_ctor(int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(length));
}
/// @param length: int32_t (default: static_cast<int32_t>(0x1000))
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::_ctor(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Texture2D* UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "get_atlas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::GradientSettingsAtlas::Add(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "Add",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Alloc, false>(this, ___internal_method, count);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Write(::UnityEngine::UIElements::UIR::Alloc alloc,
                                                                       ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> settings,
                                                                       ::UnityEngine::UIElements::UIR::GradientRemap* remap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::GradientRemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc, settings, remap);
}
inline bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_MustCommit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "get_MustCommit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_MustCommit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(), "set_MustCommit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Commit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "Commit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::PrepareAtlas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>::get(),
                                                                             "PrepareAtlas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas::GradientSettingsAtlas() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
