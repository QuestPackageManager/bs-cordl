#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlIntAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlIntAttributeDescription)
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
class __UxmlIntAttributeDescription____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlIntAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlIntAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlIntAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UxmlIntAttributeDescription::<>c*
class CORDL_TYPE __UxmlIntAttributeDescription____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__UxmlIntAttributeDescription____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, int32_t, int32_t>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_3<::StringW, int32_t, int32_t>* __9__4_0;

  static inline ::UnityEngine::UIElements::__UxmlIntAttributeDescription____c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4a3c114, size 0x40, virtual false, abstract: false, final false
  inline int32_t _GetValueFromBag_b__3_0(::StringW s, int32_t i);

  /// @brief Method <TryGetValueFromBag>b__4_0, addr 0x4a3c154, size 0x40, virtual false, abstract: false, final false
  inline int32_t _TryGetValueFromBag_b__4_0(::StringW s, int32_t i);

  /// @brief Method .ctor, addr 0x4a3c10c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__UxmlIntAttributeDescription____c* getStaticF___9();

  static inline ::System::Func_3<::StringW, int32_t, int32_t>* getStaticF___9__3_0();

  static inline ::System::Func_3<::StringW, int32_t, int32_t>* getStaticF___9__4_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlIntAttributeDescription____c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, int32_t, int32_t>* value);

  static inline void setStaticF___9__4_0(::System::Func_3<::StringW, int32_t, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlIntAttributeDescription____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UxmlIntAttributeDescription____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UxmlIntAttributeDescription____c(__UxmlIntAttributeDescription____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlIntAttributeDescription____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UxmlIntAttributeDescription____c(__UxmlIntAttributeDescription____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6223 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlIntAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlIntAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlIntAttributeDescription*
class CORDL_TYPE UxmlIntAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UxmlIntAttributeDescription____c;

  /// @brief Method ConvertValueToInt, addr 0x4a3c074, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ConvertValueToInt(::StringW v, int32_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4a3bdc8, size 0x14c, virtual true, abstract: false, final false
  inline int32_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlIntAttributeDescription* New_ctor();

  /// @brief Method TryGetValueFromBag, addr 0x4a3bf14, size 0x160, virtual false, abstract: false, final false
  inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ByRef<int32_t> value);

  /// @brief Method .ctor, addr 0x4a3bd30, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlIntAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlIntAttributeDescription(UxmlIntAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlIntAttributeDescription(UxmlIntAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlIntAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlIntAttributeDescription*, "UnityEngine.UIElements", "UxmlIntAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlIntAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlIntAttributeDescription____c*, "UnityEngine.UIElements", "UxmlIntAttributeDescription/<>c");
