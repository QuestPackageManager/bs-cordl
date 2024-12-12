#pragma once
// IWYU pragma private; include "System/Linq/Set_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Set_1)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Linq {
template <typename TElement> struct Set_1_Slot;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement> class Set_1;
}
namespace System::Linq {
template <typename TElement> struct Set_1_Slot;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Set_1);
MARK_GEN_VAL_T(::System::Linq::Set_1_Slot);
// Dependencies
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: true
// CS Name: System.Linq.Set`1/Slot<TElement>
struct CORDL_TYPE Set_1_Slot {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Set_1_Slot();

  // Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: None }, CppParam { name: "next",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Set_1_Slot(int32_t hashCode, TElement value, int32_t next) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
  int32_t hashCode;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  TElement value;

  /// @brief Field next, offset: 0x10, size: 0x4, def value: None
  int32_t next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: System.Linq.Set`1<TElement>
class CORDL_TYPE Set_1 : public ::System::Object {
public:
  // Declarations
  using Slot = ::System::Linq::Set_1_Slot<TElement>;

  /// @brief Field buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buckets, put = __cordl_internal_set_buckets)) ::ArrayW<int32_t, ::Array<int32_t>*> buckets;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TElement>* comparer;

  /// @brief Field count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field freeList, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_freeList, put = __cordl_internal_set_freeList)) int32_t freeList;

  /// @brief Field slots, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_slots, put = __cordl_internal_set_slots)) ::ArrayW<::System::Linq::Set_1_Slot<TElement>, ::Array<::System::Linq::Set_1_Slot<TElement>>*> slots;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Add(TElement value);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Find(TElement value, bool add);

  /// @brief Method InternalGetHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t InternalGetHashCode(TElement value);

  static inline ::System::Linq::Set_1<TElement>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>* comparer);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(TElement value);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_buckets() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_buckets();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>*& __cordl_internal_get_comparer();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_freeList() const;

  constexpr int32_t& __cordl_internal_get_freeList();

  constexpr ::ArrayW<::System::Linq::Set_1_Slot<TElement>, ::Array<::System::Linq::Set_1_Slot<TElement>>*> const& __cordl_internal_get_slots() const;

  constexpr ::ArrayW<::System::Linq::Set_1_Slot<TElement>, ::Array<::System::Linq::Set_1_Slot<TElement>>*>& __cordl_internal_get_slots();

  constexpr void __cordl_internal_set_buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TElement>* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_freeList(int32_t value);

  constexpr void __cordl_internal_set_slots(::ArrayW<::System::Linq::Set_1_Slot<TElement>, ::Array<::System::Linq::Set_1_Slot<TElement>>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>* comparer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Set_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Set_1(Set_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Set_1(Set_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13598 };

  /// @brief Field buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___buckets;

  /// @brief Field slots, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Set_1_Slot<TElement>, ::Array<::System::Linq::Set_1_Slot<TElement>>*> ___slots;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field freeList, offset: 0x24, size: 0x4, def value: None
  int32_t ___freeList;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TElement>* ___comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Set_1, "System.Linq", "Set`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Linq::Set_1_Slot, "System.Linq", "Set`1/Slot");
