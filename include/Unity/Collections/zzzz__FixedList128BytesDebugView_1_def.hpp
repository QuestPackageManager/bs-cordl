#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList128BytesDebugView_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__FixedList128Bytes_1_def.hpp"
CORDL_MODULE_EXPORT(FixedList128BytesDebugView_1)
namespace Unity::Collections {
template <typename T> struct FixedList128Bytes_1;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> class FixedList128BytesDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::FixedList128BytesDebugView_1);
// Dependencies System.Object, Unity.Collections.FixedList128Bytes`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.FixedList128BytesDebugView`1<T>
class CORDL_TYPE FixedList128BytesDebugView_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Items)) ::ArrayW<T, ::Array<T>*> Items;

  /// @brief Field m_List, offset 0x10, size 0x80
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List)) ::Unity::Collections::FixedList128Bytes_1<T> m_List;

  static inline ::Unity::Collections::FixedList128BytesDebugView_1<T>* New_ctor(::Unity::Collections::FixedList128Bytes_1<T> list);

  constexpr ::Unity::Collections::FixedList128Bytes_1<T> const& __cordl_internal_get_m_List() const;

  constexpr ::Unity::Collections::FixedList128Bytes_1<T>& __cordl_internal_get_m_List();

  constexpr void __cordl_internal_set_m_List(::Unity::Collections::FixedList128Bytes_1<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::FixedList128Bytes_1<T> list);

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedList128BytesDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedList128BytesDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedList128BytesDebugView_1(FixedList128BytesDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedList128BytesDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedList128BytesDebugView_1(FixedList128BytesDebugView_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15540 };

  /// @brief Field m_List, offset: 0x10, size: 0x80, def value: None
  ::Unity::Collections::FixedList128Bytes_1<T> ___m_List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::FixedList128BytesDebugView_1, "Unity.Collections", "FixedList128BytesDebugView`1");
