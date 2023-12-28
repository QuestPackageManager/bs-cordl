#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ShaderInfoStorage_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderInfoStorageRGBA32)
namespace UnityEngine::UIElements::UIR {
class __ShaderInfoStorageRGBA32____c;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Color32;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBA32;
}
namespace UnityEngine::UIElements::UIR {
class __ShaderInfoStorageRGBA32____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7382))
// CS Name: ::ShaderInfoStorageRGBA32::<>c*
class CORDL_TYPE __ShaderInfoStorageRGBA32____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c* __9;

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c* value);

  static inline ::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c* getStaticF___9();

  static inline ::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c* New_ctor();

  /// @brief Method .ctor addr 0x2e8b4e0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.cctor>b__2_0 addr 0x2e8b4e8 size 0x2c4 virtual false final false
  inline ::UnityEngine::Color32 __cctor_b__2_0(::UnityEngine::Color c);

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderInfoStorageRGBA32____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShaderInfoStorageRGBA32____c(__ShaderInfoStorageRGBA32____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderInfoStorageRGBA32____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShaderInfoStorageRGBA32____c(__ShaderInfoStorageRGBA32____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShaderInfoStorageRGBA32____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorageRGBA32
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10250)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7381), inst: 742 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7381))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7383)) CS Name: ::UnityEngine.UIElements.UIR::ShaderInfoStorageRGBA32*
class CORDL_TYPE ShaderInfoStorageRGBA32 : public ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color32> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c;

  /// @brief Field s_Convert, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Convert, put = setStaticF_s_Convert))::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color32>* s_Convert;

  static inline void setStaticF_s_Convert(::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color32>* value);

  static inline ::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color32>* getStaticF_s_Convert();

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32* New_ctor(int32_t initialSize, int32_t maxSize);

  /// @brief Method .ctor addr 0x2e8935c size 0x94 virtual false final false
  inline void _ctor(int32_t initialSize, int32_t maxSize);

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInfoStorageRGBA32();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__ShaderInfoStorageRGBA32____c*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32/<>c");
