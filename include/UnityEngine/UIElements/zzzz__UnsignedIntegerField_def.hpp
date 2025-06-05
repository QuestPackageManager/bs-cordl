#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UnsignedIntegerField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsignedIntegerField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class UnsignedIntegerField_UnsignedIntegerInput;
}
namespace UnityEngine::UIElements {
class UnsignedIntegerField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnsignedIntegerField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlUnsignedIntAttributeDescription;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnsignedIntegerField;
}
namespace UnityEngine::UIElements {
class UnsignedIntegerField_UnsignedIntegerInput;
}
namespace UnityEngine::UIElements {
class UnsignedIntegerField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnsignedIntegerField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedIntegerField);
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedIntegerField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedIntegerField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedIntegerField/UxmlFactory
class CORDL_TYPE UnsignedIntegerField_UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::UnsignedIntegerField*, ::UnityEngine::UIElements::UnsignedIntegerField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::UnsignedIntegerField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a13040, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedIntegerField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedIntegerField_UxmlFactory(UnsignedIntegerField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedIntegerField_UxmlFactory(UnsignedIntegerField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5722 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedIntegerField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedIntegerField/UxmlTraits
class CORDL_TYPE UnsignedIntegerField_UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<uint32_t, ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::UnsignedIntegerField_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4a13088, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedIntegerField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedIntegerField_UxmlTraits(UnsignedIntegerField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedIntegerField_UxmlTraits(UnsignedIntegerField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5723 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedIntegerField_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1::TextValueInput<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedIntegerField/UnsignedIntegerInput
class CORDL_TYPE UnsignedIntegerField_UnsignedIntegerInput : public ::UnityEngine::UIElements::TextValueField_1_TextValueInput<uint32_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentUnsignedIntegerField)) ::UnityEngine::UIElements::UnsignedIntegerField* parentUnsignedIntegerField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4a131a8, size 0x250, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint32_t startValue);

  static inline ::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput* New_ctor();

  /// @brief Method StringToValue, addr 0x4a13444, size 0xa8, virtual true, abstract: false, final false
  inline uint32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x4a133f8, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint32_t v);

  /// @brief Method .ctor, addr 0x4a12e54, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x4a13150, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentUnsignedIntegerField, addr 0x4a130d0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UnsignedIntegerField* get_parentUnsignedIntegerField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedIntegerField_UnsignedIntegerInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField_UnsignedIntegerInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedIntegerField_UnsignedIntegerInput(UnsignedIntegerField_UnsignedIntegerInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField_UnsignedIntegerInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedIntegerField_UnsignedIntegerInput(UnsignedIntegerField_UnsignedIntegerInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedIntegerField
class CORDL_TYPE UnsignedIntegerField : public ::UnityEngine::UIElements::TextValueField_1<uint32_t> {
public:
  // Declarations
  using UnsignedIntegerInput = ::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput;

  using UxmlFactory = ::UnityEngine::UIElements::UnsignedIntegerField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::UnsignedIntegerField_UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  __declspec(property(get = get_integerInput)) ::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput* integerInput;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4a12f0c, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint32_t startValue);

  /// @brief Method CanTryParse, addr 0x4a12ee8, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::UnsignedIntegerField* New_ctor();

  static inline ::UnityEngine::UIElements::UnsignedIntegerField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x4a12c1c, size 0xdc, virtual true, abstract: false, final false
  inline uint32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x4a12b64, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint32_t v);

  /// @brief Method .ctor, addr 0x4a12cf8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a12d04, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_integerInput, addr 0x4a12ae0, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput* get_integerInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedIntegerField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedIntegerField(UnsignedIntegerField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedIntegerField(UnsignedIntegerField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5725 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedIntegerField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedIntegerField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedIntegerField*, "UnityEngine.UIElements", "UnsignedIntegerField");
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedIntegerField_UnsignedIntegerInput*, "UnityEngine.UIElements", "UnsignedIntegerField/UnsignedIntegerInput");
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedIntegerField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedIntegerField_UxmlFactory*, "UnityEngine.UIElements", "UnsignedIntegerField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedIntegerField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedIntegerField_UxmlTraits*, "UnityEngine.UIElements", "UnsignedIntegerField/UxmlTraits");
