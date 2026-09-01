#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Toggle.hpp"
#include "UnityEngine/UIElements/zzzz__BaseBoolField_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Toggle_UxmlFactory::*)()>(&::UnityEngine::UIElements::Toggle_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d78604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Toggle_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Toggle_UxmlFactory* UnityEngine::UIElements::Toggle_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Toggle_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Toggle_UxmlFactory::Toggle_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Toggle_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Toggle_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6d7866c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::Toggle_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Toggle_UxmlTraits::*)()>(&::UnityEngine::UIElements::Toggle_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d787a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::Toggle_UxmlTraits::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::Toggle_UxmlTraits::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::Toggle_UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
inline void UnityEngine::UIElements::Toggle_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                             ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Toggle_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Toggle_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Toggle_UxmlTraits* UnityEngine::UIElements::Toggle_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Toggle_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Toggle_UxmlTraits::Toggle_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Toggle::*)()>(&::UnityEngine::UIElements::Toggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d78120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Toggle::*)(::StringW)>(&::UnityEngine::UIElements::Toggle::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d78128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle.InitLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Toggle::*)()>(&::UnityEngine::UIElements::Toggle::InitLabel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d78254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), { ::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), 154 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle.UpdateMixedValueContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Toggle::*)()>(&::UnityEngine::UIElements::Toggle::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6d782d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), { ::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), 152 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Toggle::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Toggle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Toggle*>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Toggle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Toggle*>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Toggle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Toggle*>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_noTextVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "noTextVariantUssClassName", ::UnityEngine::UIElements::Toggle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_noTextVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "noTextVariantUssClassName", ::UnityEngine::UIElements::Toggle*>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_checkmarkUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::UnityEngine::UIElements::Toggle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_checkmarkUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::UnityEngine::UIElements::Toggle*>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_textUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textUssClassName", ::UnityEngine::UIElements::Toggle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_textUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "textUssClassName", ::UnityEngine::UIElements::Toggle*>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_mixedValuesUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "mixedValuesUssClassName", ::UnityEngine::UIElements::Toggle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_mixedValuesUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "mixedValuesUssClassName", ::UnityEngine::UIElements::Toggle*>();
}
inline void UnityEngine::UIElements::Toggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Toggle::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::Toggle::InitLabel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Toggle::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Toggle*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Toggle* UnityEngine::UIElements::Toggle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Toggle*>());
}
inline ::UnityEngine::UIElements::Toggle* UnityEngine::UIElements::Toggle::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Toggle*>(label));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Toggle::Toggle() {}
