#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ShaderInfoStorageRGBAFloat.hpp"
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
class ShaderInfoStorageRGBAFloat___c;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBAFloat;
}
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBAFloat___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBAFloat/<>c
class CORDL_TYPE ShaderInfoStorageRGBAFloat___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c* __9;

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c* New_ctor();

  /// @brief Method <.cctor>b__2_0, addr 0x49af260, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color __cctor_b__2_0(::UnityEngine::Color c);

  /// @brief Method .ctor, addr 0x49af258, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInfoStorageRGBAFloat___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInfoStorageRGBAFloat___c(ShaderInfoStorageRGBAFloat___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInfoStorageRGBAFloat___c(ShaderInfoStorageRGBAFloat___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.Color, UnityEngine.UIElements.UIR.ShaderInfoStorage`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBAFloat
class CORDL_TYPE ShaderInfoStorageRGBAFloat : public ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c;

  /// @brief Field s_Convert, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Convert, put = setStaticF_s_Convert)) ::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color>* s_Convert;

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat* New_ctor(int32_t initialSize, int32_t maxSize);

  /// @brief Method .ctor, addr 0x49af0a4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize, int32_t maxSize);

  static inline ::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color>* getStaticF_s_Convert();

  static inline void setStaticF_s_Convert(::System::Func_2<::UnityEngine::Color, ::UnityEngine::Color>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInfoStorageRGBAFloat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInfoStorageRGBAFloat(ShaderInfoStorageRGBAFloat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBAFloat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInfoStorageRGBAFloat(ShaderInfoStorageRGBAFloat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBAFloat");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ShaderInfoStorageRGBAFloat___c*, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBAFloat/<>c");
