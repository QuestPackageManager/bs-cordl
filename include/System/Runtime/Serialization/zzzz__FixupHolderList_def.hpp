#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixupHolderList)
namespace System::Runtime::Serialization {
class FixupHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FixupHolderList;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::FixupHolderList);
// Type: System.Runtime.Serialization::FixupHolderList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3220))
// CS Name: ::System.Runtime.Serialization::FixupHolderList*
class CORDL_TYPE FixupHolderList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_values, offset 0x10, size 0x8
  __declspec(property(get = __get_m_values, put = __set_m_values))::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*> m_values;

  /// @brief Field m_count, offset 0x18, size 0x4
  __declspec(property(get = __get_m_count, put = __set_m_count)) int32_t m_count;

  constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*>& __get_m_values();

  constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*> const& __get_m_values() const;

  constexpr void __set_m_values(::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*> value);

  constexpr int32_t& __get_m_count();

  constexpr int32_t const& __get_m_count() const;

  constexpr void __set_m_count(int32_t value);

  static inline ::System::Runtime::Serialization::FixupHolderList* New_ctor();

  /// @brief Method .ctor, addr 0x24bc7cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::FixupHolderList* New_ctor(int32_t startingSize);

  /// @brief Method .ctor, addr 0x24bc8d8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t startingSize);

  /// @brief Method Add, addr 0x24bc944, size 0xa8, virtual true, abstract: false, final false
  inline void Add(::System::Runtime::Serialization::FixupHolder* fixup);

  /// @brief Method EnlargeArray, addr 0x24bc9ec, size 0x88, virtual false, abstract: false, final false
  inline void EnlargeArray();

  // Ctor Parameters [CppParam { name: "", ty: "FixupHolderList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixupHolderList(FixupHolderList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixupHolderList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixupHolderList(FixupHolderList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixupHolderList();

public:
  /// @brief Field m_values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*> ___m_values;

  /// @brief Field m_count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FixupHolderList, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::FixupHolderList, ___m_values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::FixupHolderList, ___m_count) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FixupHolderList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FixupHolderList*, "System.Runtime.Serialization", "FixupHolderList");
