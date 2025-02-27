#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/LongField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LongField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class LongField_LongInput;
}
namespace UnityEngine::UIElements {
class LongField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class LongField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class LongField;
}
namespace UnityEngine::UIElements {
class LongField_LongInput;
}
namespace UnityEngine::UIElements {
class LongField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class LongField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::LongField);
MARK_REF_PTR_T(::UnityEngine::UIElements::LongField_LongInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::LongField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::LongField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.LongField/UxmlFactory
class CORDL_TYPE LongField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::LongField*, ::UnityEngine::UIElements::LongField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::LongField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49ff930, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongField_UxmlFactory(LongField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongField_UxmlFactory(LongField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LongField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.LongField/UxmlTraits
class CORDL_TYPE LongField_UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<int64_t, ::UnityEngine::UIElements::UxmlLongAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::LongField_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x49ff978, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongField_UxmlTraits(LongField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongField_UxmlTraits(LongField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LongField_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1::TextValueInput<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.LongField/LongInput
class CORDL_TYPE LongField_LongInput : public ::UnityEngine::UIElements::TextValueField_1_TextValueInput<int64_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentLongField)) ::UnityEngine::UIElements::LongField* parentLongField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49ffa98, size 0x234, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int64_t startValue);

  /// @brief Method ClampMinMaxLongValue, addr 0x49ffccc, size 0xa4, virtual false, abstract: false, final false
  inline int64_t ClampMinMaxLongValue(int64_t niceDelta, int64_t value);

  static inline ::UnityEngine::UIElements::LongField_LongInput* New_ctor();

  /// @brief Method StringToValue, addr 0x49ffdbc, size 0xa8, virtual true, abstract: false, final false
  inline int64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49ffd70, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int64_t v);

  /// @brief Method .ctor, addr 0x49ff744, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x49ffa40, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentLongField, addr 0x49ff9c0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LongField* get_parentLongField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongField_LongInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongField_LongInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongField_LongInput(LongField_LongInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongField_LongInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongField_LongInput(LongField_LongInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LongField_LongInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.LongField
class CORDL_TYPE LongField : public ::UnityEngine::UIElements::TextValueField_1<int64_t> {
public:
  // Declarations
  using LongInput = ::UnityEngine::UIElements::LongField_LongInput;

  using UxmlFactory = ::UnityEngine::UIElements::LongField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::LongField_UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_longInput)) ::UnityEngine::UIElements::LongField_LongInput* longInput;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49ff7fc, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int64_t startValue);

  /// @brief Method CanTryParse, addr 0x49ff7d8, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::LongField* New_ctor();

  static inline ::UnityEngine::UIElements::LongField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x49ff50c, size 0xdc, virtual true, abstract: false, final false
  inline int64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49ff454, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int64_t v);

  /// @brief Method .ctor, addr 0x49ff5e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49ff5f4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_longInput, addr 0x49ff3d0, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LongField_LongInput* get_longInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongField(LongField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongField(LongField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LongField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::LongField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LongField*, "UnityEngine.UIElements", "LongField");
NEED_NO_BOX(::UnityEngine::UIElements::LongField_LongInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LongField_LongInput*, "UnityEngine.UIElements", "LongField/LongInput");
NEED_NO_BOX(::UnityEngine::UIElements::LongField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LongField_UxmlFactory*, "UnityEngine.UIElements", "LongField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::LongField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LongField_UxmlTraits*, "UnityEngine.UIElements", "LongField/UxmlTraits");
