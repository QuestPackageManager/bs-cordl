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
class UxmlUnsignedLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UnsignedLongField__UnsignedLongInput;
}
namespace UnityEngine::UIElements {
class __UnsignedLongField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __UnsignedLongField__UxmlTraits;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnsignedLongField;
}
namespace UnityEngine::UIElements {
class __UnsignedLongField__UnsignedLongInput;
}
namespace UnityEngine::UIElements {
class __UnsignedLongField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __UnsignedLongField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedLongField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UnsignedLongField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UnsignedLongField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnsignedLongField::UxmlFactory*
class CORDL_TYPE __UnsignedLongField__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::UnsignedLongField*, ::UnityEngine::UIElements::__UnsignedLongField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__UnsignedLongField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49ac688, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsignedLongField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedLongField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsignedLongField__UxmlFactory(__UnsignedLongField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedLongField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsignedLongField__UxmlFactory(__UnsignedLongField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5696 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UnsignedLongField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnsignedLongField::UxmlTraits*
class CORDL_TYPE __UnsignedLongField__UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<uint64_t, ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__UnsignedLongField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x49ac6d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsignedLongField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedLongField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsignedLongField__UxmlTraits(__UnsignedLongField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedLongField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsignedLongField__UxmlTraits(__UnsignedLongField__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5697 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UnsignedLongField__UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UnsignedLongInput
// SizeInfo { instance_size: 1032, native_size: -1, calculated_instance_size: 1032, calculated_native_size: 1032, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnsignedLongField::UnsignedLongInput*
class CORDL_TYPE __UnsignedLongField__UnsignedLongInput : public ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<uint64_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentUnsignedLongField)) ::UnityEngine::UIElements::UnsignedLongField* parentUnsignedLongField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49ac7f0, size 0x234, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint64_t startValue);

  /// @brief Method ClampToMinMaxULongValue, addr 0x49aca24, size 0x80, virtual false, abstract: false, final false
  inline uint64_t ClampToMinMaxULongValue(int64_t niceDelta, uint64_t value);

  static inline ::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput* New_ctor();

  /// @brief Method StringToValue, addr 0x49acaf0, size 0xa8, virtual true, abstract: false, final false
  inline uint64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49acaa4, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint64_t v);

  /// @brief Method .ctor, addr 0x49ac49c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x49ac798, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentUnsignedLongField, addr 0x49ac718, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UnsignedLongField* get_parentUnsignedLongField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsignedLongField__UnsignedLongInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedLongField__UnsignedLongInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsignedLongField__UnsignedLongInput(__UnsignedLongField__UnsignedLongInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedLongField__UnsignedLongInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsignedLongField__UnsignedLongInput(__UnsignedLongField__UnsignedLongInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5698 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UnsignedLongField
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1122, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UnsignedLongField*
class CORDL_TYPE UnsignedLongField : public ::UnityEngine::UIElements::TextValueField_1<uint64_t> {
public:
  // Declarations
  using UnsignedLongInput = ::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput;

  using UxmlFactory = ::UnityEngine::UIElements::__UnsignedLongField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__UnsignedLongField__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_unsignedLongInput)) ::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput* unsignedLongInput;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49ac554, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint64_t startValue);

  /// @brief Method CanTryParse, addr 0x49ac530, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::UnsignedLongField* New_ctor();

  static inline ::UnityEngine::UIElements::UnsignedLongField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x49ac264, size 0xdc, virtual true, abstract: false, final false
  inline uint64_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49ac1ac, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint64_t v);

  /// @brief Method .ctor, addr 0x49ac340, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49ac34c, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_unsignedLongInput, addr 0x49ac128, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput* get_unsignedLongInput();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedLongField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedLongField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedLongField*, "UnityEngine.UIElements", "UnsignedLongField");
NEED_NO_BOX(::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UnsignedLongField__UnsignedLongInput*, "UnityEngine.UIElements", "UnsignedLongField/UnsignedLongInput");
NEED_NO_BOX(::UnityEngine::UIElements::__UnsignedLongField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UnsignedLongField__UxmlFactory*, "UnityEngine.UIElements", "UnsignedLongField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__UnsignedLongField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UnsignedLongField__UxmlTraits*, "UnityEngine.UIElements", "UnsignedLongField/UxmlTraits");
