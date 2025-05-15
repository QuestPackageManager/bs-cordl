#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FixupHolderList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FixupHolderList
class CORDL_TYPE FixupHolderList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_values,
                      put = __cordl_internal_set_m_values)) ::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*>
      m_values;

  /// @brief Method Add, addr 0x3cfbb1c, size 0xa8, virtual true, abstract: false, final false
  inline void Add(::System::Runtime::Serialization::FixupHolder* fixup);

  /// @brief Method EnlargeArray, addr 0x3cfbbc4, size 0x88, virtual false, abstract: false, final false
  inline void EnlargeArray();

  static inline ::System::Runtime::Serialization::FixupHolderList* New_ctor();

  static inline ::System::Runtime::Serialization::FixupHolderList* New_ctor(int32_t startingSize);

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*> const& __cordl_internal_get_m_values() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*>& __cordl_internal_get_m_values();

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr void __cordl_internal_set_m_values(::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*> value);

  /// @brief Method .ctor, addr 0x3cfb9a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cfbab0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t startingSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixupHolderList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixupHolderList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixupHolderList(FixupHolderList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixupHolderList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixupHolderList(FixupHolderList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3220 };

  /// @brief Field m_values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::FixupHolder*, ::Array<::System::Runtime::Serialization::FixupHolder*>*> ___m_values;

  /// @brief Field m_count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::FixupHolderList, ___m_values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::FixupHolderList, ___m_count) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FixupHolderList, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FixupHolderList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FixupHolderList*, "System.Runtime.Serialization", "FixupHolderList");
