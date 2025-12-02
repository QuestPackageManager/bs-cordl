#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BitArray8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray8)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class IBitArray;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BitArray8;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BitArray8);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BitArray8
struct CORDL_TYPE BitArray8 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_allFalse)) bool allFalse;

  __declspec(property(get = get_allTrue)) bool allTrue;

  __declspec(property(get = get_capacity)) uint32_t capacity;

  __declspec(property(get = get_humanizedData)) ::StringW humanizedData;

  /// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
  constexpr operator ::UnityEngine::Rendering::IBitArray*();

  /// @brief Method BitAnd, addr 0x6597348, size 0x98, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method BitNot, addr 0x6597478, size 0x64, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitNot();

  /// @brief Method BitOr, addr 0x65973e0, size 0x98, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method Equals, addr 0x65974fc, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x6597578, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6597270, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue);

  /// @brief Method .ctor, addr 0x6597268, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint8_t initValue);

  /// @brief Method get_Item, addr 0x6597200, size 0x10, virtual true, abstract: false, final true
  inline bool get_Item(uint32_t index);

  /// @brief Method get_allFalse, addr 0x65970b8, size 0x10, virtual true, abstract: false, final true
  inline bool get_allFalse();

  /// @brief Method get_allTrue, addr 0x65970c8, size 0x10, virtual true, abstract: false, final true
  inline bool get_allTrue();

  /// @brief Method get_capacity, addr 0x65970b0, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_capacity();

  /// @brief Method get_humanizedData, addr 0x65970d8, size 0x128, virtual true, abstract: false, final true
  inline ::StringW get_humanizedData();

  /// @brief Convert to "::UnityEngine::Rendering::IBitArray"
  constexpr ::UnityEngine::Rendering::IBitArray* i___UnityEngine__Rendering__IBitArray();

  /// @brief Method op_BitwiseAnd, addr 0x6597340, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray8 op_BitwiseAnd(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b);

  /// @brief Method op_BitwiseOr, addr 0x6597338, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray8 op_BitwiseOr(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b);

  /// @brief Method op_Equality, addr 0x65974dc, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b);

  /// @brief Method op_Inequality, addr 0x65974ec, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b);

  /// @brief Method op_OnesComplement, addr 0x6597330, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray8 op_OnesComplement(::UnityEngine::Rendering::BitArray8 a);

  /// @brief Method set_Item, addr 0x6597220, size 0x24, virtual true, abstract: false, final true
  inline void set_Item(uint32_t index, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitArray8();

  // Ctor Parameters [CppParam { name: "data", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr BitArray8(uint8_t data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12229 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field data, offset: 0x0, size: 0x1, def value: None
  uint8_t data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BitArray8, data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BitArray8, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BitArray8, "UnityEngine.Rendering", "BitArray8");
