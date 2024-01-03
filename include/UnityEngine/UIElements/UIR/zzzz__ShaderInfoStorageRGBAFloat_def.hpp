#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ShaderInfoStorage_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderInfoStorageRGBAFloat)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements::UIR {
class __ShaderInfoStorageRGBAFloat____c;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBAFloat;
}
namespace UnityEngine::UIElements::UIR {
class __ShaderInfoStorageRGBAFloat____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7384))
// CS Name: ::ShaderInfoStorageRGBAFloat::<>c*
class CORDL_TYPE __ShaderInfoStorageRGBAFloat____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c* __9;

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c* value);

  static inline ::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c* getStaticF___9();

  static inline ::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c* New_ctor();

  /// @brief Method .ctor, addr 0x2e8b8d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.cctor>b__2_0, addr 0x2e8b8dc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color __cctor_b__2_0(::UnityEngine::Color c);

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderInfoStorageRGBAFloat____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShaderInfoStorageRGBAFloat____c(__ShaderInfoStorageRGBAFloat____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderInfoStorageRGBAFloat____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShaderInfoStorageRGBAFloat____c(__ShaderInfoStorageRGBAFloat____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShaderInfoStorageRGBAFloat____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorageRGBAFloat
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7381)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7381), inst: 293
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7385)) CS Name: ::UnityEngine.UIElements.UIR::ShaderInfoStorageRGBAFloat*
class CORDL_TYPE ShaderInfoStorageRGBAFloat : public ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c;

  /// @brief Field s_Convert, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Convert, put = setStaticF_s_Convert))::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color>* s_Convert;

  static inline void setStaticF_s_Convert(::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color>* value);

  static inline ::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color>* getStaticF_s_Convert();

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat* New_ctor(int32_t initialSize, int32_t maxSize);

  /// @brief Method .ctor, addr 0x2e892c8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize, int32_t maxSize);

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInfoStorageRGBAFloat(ShaderInfoStorageRGBAFloat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInfoStorageRGBAFloat(ShaderInfoStorageRGBAFloat const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInfoStorageRGBAFloat();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBAFloat");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBAFloat____c*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBAFloat/<>c");
