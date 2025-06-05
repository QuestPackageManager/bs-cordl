#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureId)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextureId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextureId);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextureId
struct CORDL_TYPE TextureId {
public:
  // Declarations
  __declspec(property(get = get_index)) int32_t index;

  /// @brief Field invalid, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_invalid, put = setStaticF_invalid)) ::UnityEngine::UIElements::TextureId invalid;

  /// @brief Method ConvertToGpu, addr 0x4a67278, size 0x5c, virtual false, abstract: false, final false
  inline float_t ConvertToGpu();

  /// @brief Method Equals, addr 0x4a672d4, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4a6737c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x4a67260, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  static inline ::UnityEngine::UIElements::TextureId getStaticF_invalid();

  /// @brief Method get_index, addr 0x4a6726c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method op_Equality, addr 0x4a67384, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right);

  /// @brief Method op_Inequality, addr 0x4a67390, size 0x64, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right);

  static inline void setStaticF_invalid(::UnityEngine::UIElements::TextureId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureId();

  // Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureId(int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6042 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextureId, m_Index) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextureId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextureId, "UnityEngine.UIElements", "TextureId");
