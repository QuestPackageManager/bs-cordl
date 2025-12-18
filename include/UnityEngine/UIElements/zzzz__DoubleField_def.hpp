#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DoubleField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class DoubleField_DoubleInput;
}
namespace UnityEngine::UIElements {
class DoubleField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class DoubleField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlDoubleAttributeDescription;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DoubleField;
}
namespace UnityEngine::UIElements {
class DoubleField_DoubleInput;
}
namespace UnityEngine::UIElements {
class DoubleField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class DoubleField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DoubleField);
MARK_REF_PTR_T(::UnityEngine::UIElements::DoubleField_DoubleInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::DoubleField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::DoubleField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DoubleField/UxmlFactory
class CORDL_TYPE DoubleField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::DoubleField*, ::UnityEngine::UIElements::DoubleField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::DoubleField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b72ab4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleField_UxmlFactory(DoubleField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleField_UxmlFactory(DoubleField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DoubleField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DoubleField/UxmlTraits
class CORDL_TYPE DoubleField_UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<double_t, ::UnityEngine::UIElements::UxmlDoubleAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::DoubleField_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x6b72b1c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleField_UxmlTraits(DoubleField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleField_UxmlTraits(DoubleField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DoubleField_UxmlTraits, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1::TextValueInput<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DoubleField/DoubleInput
class CORDL_TYPE DoubleField_DoubleInput : public ::UnityEngine::UIElements::TextValueField_1_TextValueInput<double_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentDoubleField)) ::UnityEngine::UIElements::DoubleField* parentDoubleField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x6b72c40, size 0x1ac, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, double_t startValue);

  static inline ::UnityEngine::UIElements::DoubleField_DoubleInput* New_ctor();

  /// @brief Method StringToValue, addr 0x6b72e48, size 0xa0, virtual true, abstract: false, final false
  inline double_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x6b72dec, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(double_t v);

  /// @brief Method .ctor, addr 0x6b728c0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x6b72be4, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentDoubleField, addr 0x6b72b68, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DoubleField* get_parentDoubleField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleField_DoubleInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleField_DoubleInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleField_DoubleInput(DoubleField_DoubleInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleField_DoubleInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleField_DoubleInput(DoubleField_DoubleInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4179 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DoubleField_DoubleInput, 0x4e8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DoubleField
class CORDL_TYPE DoubleField : public ::UnityEngine::UIElements::TextValueField_1<double_t> {
public:
  // Declarations
  using DoubleInput = ::UnityEngine::UIElements::DoubleField_DoubleInput;

  using UxmlFactory = ::UnityEngine::UIElements::DoubleField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::DoubleField_UxmlTraits;

  __declspec(property(get = get_doubleInput)) ::UnityEngine::UIElements::DoubleField_DoubleInput* doubleInput;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x6b7297c, size 0x5c, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, double_t startValue);

  /// @brief Method CanTryParse, addr 0x6b7295c, size 0x20, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::DoubleField* New_ctor();

  static inline ::UnityEngine::UIElements::DoubleField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x6b72654, size 0xe0, virtual true, abstract: false, final false
  inline double_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x6b72594, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ValueToString(double_t v);

  /// @brief Method .ctor, addr 0x6b72734, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b72740, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_doubleInput, addr 0x6b72504, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DoubleField_DoubleInput* get_doubleInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleField(DoubleField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleField(DoubleField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DoubleField, 0x540>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DoubleField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DoubleField*, "UnityEngine.UIElements", "DoubleField");
NEED_NO_BOX(::UnityEngine::UIElements::DoubleField_DoubleInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DoubleField_DoubleInput*, "UnityEngine.UIElements", "DoubleField/DoubleInput");
NEED_NO_BOX(::UnityEngine::UIElements::DoubleField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DoubleField_UxmlFactory*, "UnityEngine.UIElements", "DoubleField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::DoubleField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DoubleField_UxmlTraits*, "UnityEngine.UIElements", "DoubleField/UxmlTraits");
