#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__PageInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2bdfbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bdfd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.ClearMeshInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)(bool)>(&::UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bdfd88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "ClearMeshInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.ClearLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::ClearLineInfo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2bdfe34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "ClearLineInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_characterCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_characterCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_characterCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characterCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_spriteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_spriteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_spriteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spriteCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_spaceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spaceCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_spaceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spaceCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_spaceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spaceCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_wordCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_wordCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_wordCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_linkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_linkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_linkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linkCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_lineCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_lineCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_lineCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_pageCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_pageCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_pageCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pageCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_materialCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_materialCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_materialCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialCount = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_textElementInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElementInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const&
UnityEngine::TextCore::Text::TextInfo::__get_textElementInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElementInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_textElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textElementInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_wordInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_wordInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_wordInfo(::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wordInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_linkInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_linkInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_linkInfo(::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___linkInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_lineInfo(::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lineInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_pageInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_pageInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_pageInfo(::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pageInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_meshInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_meshInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_meshInfo(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___meshInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextCore::Text::TextInfo::__get_isDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirty;
}
constexpr bool const& UnityEngine::TextCore::Text::TextInfo::__get_isDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirty;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_isDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDirty = value;
}
inline void UnityEngine::TextCore::Text::TextInfo::setStaticF_s_InfinityVectorPositive(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_InfinityVectorPositive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::getStaticF_s_InfinityVectorPositive() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_InfinityVectorPositive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>();
}
inline void UnityEngine::TextCore::Text::TextInfo::setStaticF_s_InfinityVectorNegative(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_InfinityVectorNegative", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::getStaticF_s_InfinityVectorNegative() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_InfinityVectorNegative", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>();
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::TextInfo*>());
}
inline void UnityEngine::TextCore::Text::TextInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo(bool updateMesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "ClearMeshInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateMesh);
}
inline void UnityEngine::TextCore::Text::TextInfo::ClearLineInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "ClearLineInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextInfo::Resize(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "Resize",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, size);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextInfo::Resize(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size, bool isBlockAllocated) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(), "Resize",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, size, isBlockAllocated);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextInfo::TextInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
