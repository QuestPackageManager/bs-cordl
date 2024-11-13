#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlHash128AttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlHash128AttributeDescription)
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
class __UxmlHash128AttributeDescription____c;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlHash128AttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlHash128AttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlHash128AttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UxmlHash128AttributeDescription::<>c*
class CORDL_TYPE __UxmlHash128AttributeDescription____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, ::UnityEngine::Hash128, ::UnityEngine::Hash128>* __9__3_0;

  static inline ::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4a3ce74, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Hash128 _GetValueFromBag_b__3_0(::StringW s, ::UnityEngine::Hash128 i);

  /// @brief Method .ctor, addr 0x4a3ce6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c* getStaticF___9();

  static inline ::System::Func_3<::StringW, ::UnityEngine::Hash128, ::UnityEngine::Hash128>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, ::UnityEngine::Hash128, ::UnityEngine::Hash128>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlHash128AttributeDescription____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UxmlHash128AttributeDescription____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UxmlHash128AttributeDescription____c(__UxmlHash128AttributeDescription____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlHash128AttributeDescription____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UxmlHash128AttributeDescription____c(__UxmlHash128AttributeDescription____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6236 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlHash128AttributeDescription
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlHash128AttributeDescription*
class CORDL_TYPE UxmlHash128AttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::UnityEngine::Hash128> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c;

  /// @brief Method GetValueFromBag, addr 0x4a3ccc4, size 0x14c, virtual true, abstract: false, final false
  inline ::UnityEngine::Hash128 GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlHash128AttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x4a3cc2c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlHash128AttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlHash128AttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlHash128AttributeDescription(UxmlHash128AttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlHash128AttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlHash128AttributeDescription(UxmlHash128AttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6237 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlHash128AttributeDescription, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlHash128AttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlHash128AttributeDescription*, "UnityEngine.UIElements", "UxmlHash128AttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlHash128AttributeDescription____c*, "UnityEngine.UIElements", "UxmlHash128AttributeDescription/<>c");
