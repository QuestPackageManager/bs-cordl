#pragma once
// IWYU pragma private; include "System/Span_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ByReference_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Span_1)
namespace System {
template <typename T> struct ByReference_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
template <typename T> struct Span_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Span_1);
// Type: System::Span`1
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::System::Span`1<T>
struct CORDL_TYPE Span_1 {
public:
  // Declarations
  __declspec(property(get = get_Item)) T Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::System::Span_1<T> destination);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Fill(T value);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetPinnableReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ByRef<T> GetPinnableReference();

  /// @brief Method Slice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Span_1<T> Slice(int32_t start);

  /// @brief Method Slice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Span_1<T> Slice(int32_t start, int32_t length);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryCopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryCopyTo(::System::Span_1<T> destination);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> array, int32_t start, int32_t length);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> pointer, int32_t length);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(ByRef<T> ptr, int32_t length);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ByRef<T> get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<T> op_Implicit___System__ReadOnlySpan_1_T_(::System::Span_1<T> span);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Span_1<T> op_Implicit___System__Span_1_T_(::ArrayW<T, ::Array<T>*> array);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Span_1();

  // Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<T>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Span_1(::System::ByReference_1<T> _pointer, int32_t _length) noexcept;

  /// @brief Field _pointer, offset: 0x0, size: 0x8, def value: None
  ::System::ByReference_1<T> _pointer;

  /// @brief Field _length, offset: 0x8, size: 0x4, def value: None
  int32_t _length;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2469 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Span_1, "System", "Span`1");
