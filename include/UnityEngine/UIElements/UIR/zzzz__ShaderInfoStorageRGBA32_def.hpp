#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ShaderInfoStorageRGBA32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ShaderInfoStorage_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderInfoStorageRGBA32)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBA32___c;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBA32;
}
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBA32___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBA32/<>c
class CORDL_TYPE ShaderInfoStorageRGBA32___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c* __9;

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c* New_ctor();

  /// @brief Method <.cctor>b__2_0, addr 0x49afba4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 __cctor_b__2_0(::UnityEngine::Color c);

  /// @brief Method .ctor, addr 0x49afb9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInfoStorageRGBA32___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInfoStorageRGBA32___c(ShaderInfoStorageRGBA32___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInfoStorageRGBA32___c(ShaderInfoStorageRGBA32___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6390 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.Color32, UnityEngine.UIElements.UIR.ShaderInfoStorage`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBA32
class CORDL_TYPE ShaderInfoStorageRGBA32 : public ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color32> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c;

  /// @brief Field s_Convert, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Convert, put = setStaticF_s_Convert)) ::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color32>* s_Convert;

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32* New_ctor(int32_t initialSize, int32_t maxSize);

  /// @brief Method .ctor, addr 0x49af9e8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize, int32_t maxSize);

  static inline ::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color32>* getStaticF_s_Convert();

  static inline void setStaticF_s_Convert(::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color32>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInfoStorageRGBA32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32___c*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32/<>c");
