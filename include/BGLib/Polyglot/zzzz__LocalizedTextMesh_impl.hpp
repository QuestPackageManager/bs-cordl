#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedTextMesh.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextMesh_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "UnityEngine/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/zzzz__TextMesh_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::Polyglot::LocalizedTextMesh::*)()>(&::BGLib::Polyglot::LocalizedTextMesh::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3319c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMesh::*)()>(&::BGLib::Polyglot::LocalizedTextMesh::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3319c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMesh::*)()>(&::BGLib::Polyglot::LocalizedTextMesh::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3319c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh.OnLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMesh::*)(::BGLib::Polyglot::LocalizationModel*)>(&::BGLib::Polyglot::LocalizedTextMesh::OnLocalize)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3319c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh.IsOppositeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::LocalizedTextMesh::*)(::UnityEngine::TextAlignment, ::BGLib::Polyglot::LanguageDirection)>(
    &::BGLib::Polyglot::LocalizedTextMesh::IsOppositeDirection)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331a144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(),
                                                { "IsOppositeDirection", {}, { ::i2c::type_of<::UnityEngine::TextAlignment>(), ::i2c::type_of<::BGLib::Polyglot::LanguageDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh.IsAlignmentRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::LocalizedTextMesh::*)(::UnityEngine::TextAlignment)>(&::BGLib::Polyglot::LocalizedTextMesh::IsAlignmentRight)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x331a16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "IsAlignmentRight", {}, { ::i2c::type_of<::UnityEngine::TextAlignment>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh.IsAlignmentLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::LocalizedTextMesh::*)(::UnityEngine::TextAlignment)>(&::BGLib::Polyglot::LocalizedTextMesh::IsAlignmentLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x331a178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "IsAlignmentLeft", {}, { ::i2c::type_of<::UnityEngine::TextAlignment>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizedTextMesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizedTextMesh::*)()>(&::BGLib::Polyglot::LocalizedTextMesh::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x331a184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextMesh>& BGLib::Polyglot::LocalizedTextMesh::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::UnityW<::UnityEngine::TextMesh> const& BGLib::Polyglot::LocalizedTextMesh::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void BGLib::Polyglot::LocalizedTextMesh::__cordl_internal_set_text(::UnityW<::UnityEngine::TextMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
constexpr ::StringW& BGLib::Polyglot::LocalizedTextMesh::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::StringW const& BGLib::Polyglot::LocalizedTextMesh::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void BGLib::Polyglot::LocalizedTextMesh::__cordl_internal_set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline ::StringW BGLib::Polyglot::LocalizedTextMesh::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizedTextMesh::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizedTextMesh::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizedTextMesh::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localization);
}
inline bool BGLib::Polyglot::LocalizedTextMesh::IsOppositeDirection(::UnityEngine::TextAlignment alignment, ::BGLib::Polyglot::LanguageDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(),
                                                           { "IsOppositeDirection", {}, { ::i2c::type_of<::UnityEngine::TextAlignment>(), ::i2c::type_of<::BGLib::Polyglot::LanguageDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, alignment, direction);
}
inline bool BGLib::Polyglot::LocalizedTextMesh::IsAlignmentRight(::UnityEngine::TextAlignment alignment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "IsAlignmentRight", {}, { ::i2c::type_of<::UnityEngine::TextAlignment>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, alignment);
}
inline bool BGLib::Polyglot::LocalizedTextMesh::IsAlignmentLeft(::UnityEngine::TextAlignment alignment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { "IsAlignmentLeft", {}, { ::i2c::type_of<::UnityEngine::TextAlignment>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, alignment);
}
inline void BGLib::Polyglot::LocalizedTextMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizedTextMesh*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizedTextMesh* BGLib::Polyglot::LocalizedTextMesh::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LocalizedTextMesh*>());
}
/// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
constexpr BGLib::Polyglot::LocalizedTextMesh::operator ::BGLib::Polyglot::ILocalize*() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::Polyglot::ILocalize"
constexpr ::BGLib::Polyglot::ILocalize* BGLib::Polyglot::LocalizedTextMesh::i___BGLib__Polyglot__ILocalize() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizedTextMesh::LocalizedTextMesh() {}
