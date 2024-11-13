#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlUnsignedIntAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlUnsignedIntAttributeDescription)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class __UxmlUnsignedIntAttributeDescription____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlUnsignedIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlUnsignedIntAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UxmlUnsignedIntAttributeDescription::<>c*
class CORDL_TYPE __UxmlUnsignedIntAttributeDescription____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, uint32_t, uint32_t>* __9__3_0;

  static inline ::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4a3c418, size 0x40, virtual false, abstract: false, final false
  inline uint32_t _GetValueFromBag_b__3_0(::StringW s, uint32_t i);

  /// @brief Method .ctor, addr 0x4a3c410, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c* getStaticF___9();

  static inline ::System::Func_3<::StringW, uint32_t, uint32_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, uint32_t, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlUnsignedIntAttributeDescription____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UxmlUnsignedIntAttributeDescription____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UxmlUnsignedIntAttributeDescription____c(__UxmlUnsignedIntAttributeDescription____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlUnsignedIntAttributeDescription____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UxmlUnsignedIntAttributeDescription____c(__UxmlUnsignedIntAttributeDescription____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6225 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlUnsignedIntAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlUnsignedIntAttributeDescription*
class CORDL_TYPE UxmlUnsignedIntAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<uint32_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c;

  /// @brief Method ConvertValueToUInt, addr 0x4a3c378, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t ConvertValueToUInt(::StringW v, uint32_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4a3c22c, size 0x14c, virtual true, abstract: false, final false
  inline uint32_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x4a3c194, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlUnsignedIntAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedIntAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlUnsignedIntAttributeDescription(UxmlUnsignedIntAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedIntAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlUnsignedIntAttributeDescription(UxmlUnsignedIntAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription*, "UnityEngine.UIElements", "UxmlUnsignedIntAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlUnsignedIntAttributeDescription____c*, "UnityEngine.UIElements", "UxmlUnsignedIntAttributeDescription/<>c");
