#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoundsInt)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct __BoundsInt__PositionEnumerator;
}
// Forward declare root types
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
struct __BoundsInt__PositionEnumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoundsInt);
MARK_VAL_T(::UnityEngine::__BoundsInt__PositionEnumerator);
// Type: ::PositionEnumerator
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10247))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10167))
// CS Name: ::BoundsInt::PositionEnumerator
struct CORDL_TYPE __BoundsInt__PositionEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::UnityEngine::Vector3Int Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Vector3Int_();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method .ctor, addr 0x2ccbbe8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3Int min, ::UnityEngine::Vector3Int max);

  /// @brief Method GetEnumerator, addr 0x2ccbc24, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::__BoundsInt__PositionEnumerator GetEnumerator();

  /// @brief Method MoveNext, addr 0x2ccbc38, size 0x7c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x2ccbc08, size 0x1c, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x2ccbcb4, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3Int get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2ccbcc4, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2ccbd28, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  // Ctor Parameters [CppParam { name: "_min", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "_max", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value:
  // None }, CppParam { name: "_current", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }]
  constexpr __BoundsInt__PositionEnumerator(::UnityEngine::Vector3Int _min, ::UnityEngine::Vector3Int _max, ::UnityEngine::Vector3Int _current) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsInt__PositionEnumerator();

  /// @brief Field _min, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int _min;

  /// @brief Field _max, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3Int _max;

  /// @brief Field _current, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3Int _current;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__BoundsInt__PositionEnumerator, 0x24>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__BoundsInt__PositionEnumerator, _min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__BoundsInt__PositionEnumerator, _max) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__BoundsInt__PositionEnumerator, _current) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::BoundsInt
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10247))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10168))
// CS Name: ::UnityEngine::BoundsInt
struct CORDL_TYPE BoundsInt {
public:
  // Declarations
  using PositionEnumerator = ::UnityEngine::__BoundsInt__PositionEnumerator;

  __declspec(property(get = get_min, put = set_min))::UnityEngine::Vector3Int min;

  __declspec(property(get = get_max, put = set_max))::UnityEngine::Vector3Int max;

  __declspec(property(get = get_xMin, put = set_xMin)) int32_t xMin;

  __declspec(property(get = get_yMin, put = set_yMin)) int32_t yMin;

  __declspec(property(get = get_zMin, put = set_zMin)) int32_t zMin;

  __declspec(property(get = get_xMax, put = set_xMax)) int32_t xMax;

  __declspec(property(get = get_yMax, put = set_yMax)) int32_t yMax;

  __declspec(property(get = get_zMax, put = set_zMax)) int32_t zMax;

  __declspec(property(get = get_size))::UnityEngine::Vector3Int size;

  __declspec(property(get = get_allPositionsWithin))::UnityEngine::__BoundsInt__PositionEnumerator allPositionsWithin;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::BoundsInt>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
  constexpr ::System::IEquatable_1<::UnityEngine::BoundsInt>* i___System__IEquatable_1___UnityEngine__BoundsInt_();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method get_min, addr 0x2ccb254, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_min();

  /// @brief Method set_min, addr 0x2ccb3c4, size 0x64, virtual false, abstract: false, final false
  inline void set_min(::UnityEngine::Vector3Int value);

  /// @brief Method get_max, addr 0x2ccb4ac, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_max();

  /// @brief Method set_max, addr 0x2ccb61c, size 0x24, virtual false, abstract: false, final false
  inline void set_max(::UnityEngine::Vector3Int value);

  /// @brief Method get_xMin, addr 0x2ccb298, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_xMin();

  /// @brief Method set_xMin, addr 0x2ccb428, size 0x2c, virtual false, abstract: false, final false
  inline void set_xMin(int32_t value);

  /// @brief Method get_yMin, addr 0x2ccb2fc, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_yMin();

  /// @brief Method set_yMin, addr 0x2ccb454, size 0x2c, virtual false, abstract: false, final false
  inline void set_yMin(int32_t value);

  /// @brief Method get_zMin, addr 0x2ccb360, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_zMin();

  /// @brief Method set_zMin, addr 0x2ccb480, size 0x2c, virtual false, abstract: false, final false
  inline void set_zMin(int32_t value);

  /// @brief Method get_xMax, addr 0x2ccb4f0, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_xMax();

  /// @brief Method set_xMax, addr 0x2ccb640, size 0x10, virtual false, abstract: false, final false
  inline void set_xMax(int32_t value);

  /// @brief Method get_yMax, addr 0x2ccb554, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_yMax();

  /// @brief Method set_yMax, addr 0x2ccb650, size 0x10, virtual false, abstract: false, final false
  inline void set_yMax(int32_t value);

  /// @brief Method get_zMax, addr 0x2ccb5b8, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_zMax();

  /// @brief Method set_zMax, addr 0x2ccb660, size 0x10, virtual false, abstract: false, final false
  inline void set_zMax(int32_t value);

  /// @brief Method get_size, addr 0x2ccb670, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_size();

  /// @brief Method .ctor, addr 0x2ccb680, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int size);

  /// @brief Method ToString, addr 0x2ccb694, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2ccb6a0, size 0x154, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Equals, addr 0x2ccb9b8, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2ccba48, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::BoundsInt other);

  /// @brief Method GetHashCode, addr 0x2ccbac0, size 0xd4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_allPositionsWithin, addr 0x2ccbb94, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::__BoundsInt__PositionEnumerator get_allPositionsWithin();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_Size", ty: "::UnityEngine::Vector3Int", modifiers: "",
  // def_value: None }]
  constexpr BoundsInt(::UnityEngine::Vector3Int m_Position, ::UnityEngine::Vector3Int m_Size) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsInt();

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int m_Position;

  /// @brief Field m_Size, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3Int m_Size;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoundsInt, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::BoundsInt, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoundsInt, m_Size) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoundsInt, "UnityEngine", "BoundsInt");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__BoundsInt__PositionEnumerator, "UnityEngine", "BoundsInt/PositionEnumerator");
