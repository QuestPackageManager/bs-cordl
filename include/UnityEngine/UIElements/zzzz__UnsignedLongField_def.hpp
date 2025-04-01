#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UnsignedLongField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsignedLongField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class UnsignedLongField_UnsignedLongInput;
}
namespace UnityEngine::UIElements {
class UnsignedLongField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnsignedLongField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlUnsignedLongAttributeDescription;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnsignedLongField;
}
namespace UnityEngine::UIElements {
class UnsignedLongField_UnsignedLongInput;
}
namespace UnityEngine::UIElements {
class UnsignedLongField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnsignedLongField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedLongField);
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedLongField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedLongField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedLongField/UxmlFactory
class CORDL_TYPE UnsignedLongField_UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::UnsignedLongField*, ::UnityEngine::UIElements::UnsignedLongField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::UnsignedLongField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a0da64, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedLongField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedLongField_UxmlFactory(UnsignedLongField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedLongField_UxmlFactory(UnsignedLongField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5726 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedLongField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedLongField/UxmlTraits
class CORDL_TYPE UnsignedLongField_UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<uint64_t, ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::UnsignedLongField_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4a0daac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedLongField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedLongField_UxmlTraits(UnsignedLongField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedLongField_UxmlTraits(UnsignedLongField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5727 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedLongField_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1::TextValueInput<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedLongField/UnsignedLongInput
class CORDL_TYPE UnsignedLongField_UnsignedLongInput : public ::UnityEngine::UIElements::TextValueField_1_TextValueInput<uint64_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentUnsignedLongField)) ::UnityEngine::UIElements::UnsignedLongField* parentUnsignedLongField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4a0dbcc, size 0x234, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint64_t startValue);

  /// @brief Method ClampToMinMaxULongValue, addr 0x4a0de00, size 0x80, virtual false, abstract: false, final false
  inline uint64_t ClampToMinMaxULongValue(int64_t niceDelta, uint64_t value);

  static inline ::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput* New_ctor();

  /// @brief Method StringToValue, addr 0x4a0decc, size 0xa8, virtual true, abstract: false, final false
  inline uint64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x4a0de80, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint64_t v);

  /// @brief Method .ctor, addr 0x4a0d878, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x4a0db74, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentUnsignedLongField, addr 0x4a0daf4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UnsignedLongField* get_parentUnsignedLongField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedLongField_UnsignedLongInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField_UnsignedLongInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedLongField_UnsignedLongInput(UnsignedLongField_UnsignedLongInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField_UnsignedLongInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedLongField_UnsignedLongInput(UnsignedLongField_UnsignedLongInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5728 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UnsignedLongField
class CORDL_TYPE UnsignedLongField : public ::UnityEngine::UIElements::TextValueField_1<uint64_t> {
public:
  // Declarations
  using UnsignedLongInput = ::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput;

  using UxmlFactory = ::UnityEngine::UIElements::UnsignedLongField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::UnsignedLongField_UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_unsignedLongInput)) ::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput* unsignedLongInput;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4a0d930, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint64_t startValue);

  /// @brief Method CanTryParse, addr 0x4a0d90c, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::UnsignedLongField* New_ctor();

  static inline ::UnityEngine::UIElements::UnsignedLongField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x4a0d640, size 0xdc, virtual true, abstract: false, final false
  inline uint64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x4a0d588, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint64_t v);

  /// @brief Method .ctor, addr 0x4a0d71c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a0d728, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_unsignedLongInput, addr 0x4a0d504, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput* get_unsignedLongInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedLongField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedLongField(UnsignedLongField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedLongField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedLongField(UnsignedLongField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5729 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedLongField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedLongField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedLongField*, "UnityEngine.UIElements", "UnsignedLongField");
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedLongField_UnsignedLongInput*, "UnityEngine.UIElements", "UnsignedLongField/UnsignedLongInput");
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedLongField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedLongField_UxmlFactory*, "UnityEngine.UIElements", "UnsignedLongField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedLongField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedLongField_UxmlTraits*, "UnityEngine.UIElements", "UnsignedLongField/UxmlTraits");
