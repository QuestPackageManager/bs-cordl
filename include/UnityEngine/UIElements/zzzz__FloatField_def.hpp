#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FloatField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class FloatField_FloatInput;
}
namespace UnityEngine::UIElements {
class FloatField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class FloatField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FloatField;
}
namespace UnityEngine::UIElements {
class FloatField_FloatInput;
}
namespace UnityEngine::UIElements {
class FloatField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class FloatField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FloatField);
MARK_REF_PTR_T(::UnityEngine::UIElements::FloatField_FloatInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::FloatField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::FloatField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FloatField/UxmlFactory
class CORDL_TYPE FloatField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::FloatField*, ::UnityEngine::UIElements::FloatField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::FloatField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49956c8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatField_UxmlFactory(FloatField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatField_UxmlFactory(FloatField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FloatField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FloatField/UxmlTraits
class CORDL_TYPE FloatField_UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<float_t, ::UnityEngine::UIElements::UxmlFloatAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::FloatField_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4995710, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatField_UxmlTraits(FloatField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatField_UxmlTraits(FloatField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5578 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FloatField_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1::TextValueInput<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FloatField/FloatInput
class CORDL_TYPE FloatField_FloatInput : public ::UnityEngine::UIElements::TextValueField_1_TextValueInput<float_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentFloatField)) ::UnityEngine::UIElements::FloatField* parentFloatField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4995830, size 0x1ac, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, float_t startValue);

  static inline ::UnityEngine::UIElements::FloatField_FloatInput* New_ctor();

  /// @brief Method StringToValue, addr 0x4995a28, size 0xa8, virtual true, abstract: false, final false
  inline float_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49959dc, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(float_t v);

  /// @brief Method .ctor, addr 0x49954e4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x49957d8, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentFloatField, addr 0x4995758, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FloatField* get_parentFloatField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatField_FloatInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatField_FloatInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatField_FloatInput(FloatField_FloatInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatField_FloatInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatField_FloatInput(FloatField_FloatInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5579 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FloatField_FloatInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FloatField
class CORDL_TYPE FloatField : public ::UnityEngine::UIElements::TextValueField_1<float_t> {
public:
  // Declarations
  using FloatInput = ::UnityEngine::UIElements::FloatField_FloatInput;

  using UxmlFactory = ::UnityEngine::UIElements::FloatField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::FloatField_UxmlTraits;

  __declspec(property(get = get_floatInput)) ::UnityEngine::UIElements::FloatField_FloatInput* floatInput;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x499559c, size 0x5c, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, float_t startValue);

  /// @brief Method CanTryParse, addr 0x4995578, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::FloatField* New_ctor();

  static inline ::UnityEngine::UIElements::FloatField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x49952ac, size 0xdc, virtual true, abstract: false, final false
  inline float_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49951f4, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(float_t v);

  /// @brief Method .ctor, addr 0x4995388, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4995394, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_floatInput, addr 0x4995170, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FloatField_FloatInput* get_floatInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatField(FloatField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatField(FloatField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FloatField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FloatField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FloatField*, "UnityEngine.UIElements", "FloatField");
NEED_NO_BOX(::UnityEngine::UIElements::FloatField_FloatInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FloatField_FloatInput*, "UnityEngine.UIElements", "FloatField/FloatInput");
NEED_NO_BOX(::UnityEngine::UIElements::FloatField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FloatField_UxmlFactory*, "UnityEngine.UIElements", "FloatField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::FloatField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FloatField_UxmlTraits*, "UnityEngine.UIElements", "FloatField/UxmlTraits");
