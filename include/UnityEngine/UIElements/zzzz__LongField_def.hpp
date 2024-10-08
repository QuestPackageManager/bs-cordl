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
class UxmlLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class __LongField__LongInput;
}
namespace UnityEngine::UIElements {
class __LongField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __LongField__UxmlTraits;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class LongField;
}
namespace UnityEngine::UIElements {
class __LongField__LongInput;
}
namespace UnityEngine::UIElements {
class __LongField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __LongField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::LongField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__LongField__LongInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__LongField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__LongField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::LongField::UxmlFactory*
class CORDL_TYPE __LongField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::LongField*, ::UnityEngine::UIElements::__LongField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__LongField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4977a1c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LongField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LongField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LongField__UxmlFactory(__LongField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LongField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LongField__UxmlFactory(__LongField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__LongField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::LongField::UxmlTraits*
class CORDL_TYPE __LongField__UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<int64_t, ::UnityEngine::UIElements::UxmlLongAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__LongField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4977a64, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LongField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LongField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LongField__UxmlTraits(__LongField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LongField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LongField__UxmlTraits(__LongField__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__LongField__UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::LongInput
// SizeInfo { instance_size: 1032, native_size: -1, calculated_instance_size: 1032, calculated_native_size: 1032, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::LongField::LongInput*
class CORDL_TYPE __LongField__LongInput : public ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<int64_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentLongField)) ::UnityEngine::UIElements::LongField* parentLongField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4977b84, size 0x234, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int64_t startValue);

  /// @brief Method ClampMinMaxLongValue, addr 0x4977db8, size 0xa4, virtual false, abstract: false, final false
  inline int64_t ClampMinMaxLongValue(int64_t niceDelta, int64_t value);

  static inline ::UnityEngine::UIElements::__LongField__LongInput* New_ctor();

  /// @brief Method StringToValue, addr 0x4977ea8, size 0xa8, virtual true, abstract: false, final false
  inline int64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x4977e5c, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int64_t v);

  /// @brief Method .ctor, addr 0x4977830, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x4977b2c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentLongField, addr 0x4977aac, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LongField* get_parentLongField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LongField__LongInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LongField__LongInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LongField__LongInput(__LongField__LongInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LongField__LongInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LongField__LongInput(__LongField__LongInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__LongField__LongInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::LongField
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1122, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::LongField*
class CORDL_TYPE LongField : public ::UnityEngine::UIElements::TextValueField_1<int64_t> {
public:
  // Declarations
  using LongInput = ::UnityEngine::UIElements::__LongField__LongInput;

  using UxmlFactory = ::UnityEngine::UIElements::__LongField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__LongField__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_longInput)) ::UnityEngine::UIElements::__LongField__LongInput* longInput;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49778e8, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int64_t startValue);

  /// @brief Method CanTryParse, addr 0x49778c4, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::LongField* New_ctor();

  static inline ::UnityEngine::UIElements::LongField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x49775f8, size 0xdc, virtual true, abstract: false, final false
  inline int64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x4977540, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int64_t v);

  /// @brief Method .ctor, addr 0x49776d4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49776e0, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_longInput, addr 0x49774bc, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__LongField__LongInput* get_longInput();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5597 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LongField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::LongField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LongField*, "UnityEngine.UIElements", "LongField");
NEED_NO_BOX(::UnityEngine::UIElements::__LongField__LongInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__LongField__LongInput*, "UnityEngine.UIElements", "LongField/LongInput");
NEED_NO_BOX(::UnityEngine::UIElements::__LongField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__LongField__UxmlFactory*, "UnityEngine.UIElements", "LongField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__LongField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__LongField__UxmlTraits*, "UnityEngine.UIElements", "LongField/UxmlTraits");
