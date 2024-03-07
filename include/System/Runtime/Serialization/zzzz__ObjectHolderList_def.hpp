#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectHolderList)
namespace System::Runtime::Serialization {
class ObjectHolderListEnumerator;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectHolderList);
// Type: System.Runtime.Serialization::ObjectHolderList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::ObjectHolderList*
class CORDL_TYPE ObjectHolderList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field m_count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_values,
                      put = __cordl_internal_set_m_values))::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> m_values;

  /// @brief Method Add, addr 0x2612144, size 0xa8, virtual true, abstract: false, final false
  inline void Add(::System::Runtime::Serialization::ObjectHolder* value);

  /// @brief Method EnlargeArray, addr 0x26121ec, size 0x88, virtual false, abstract: false, final false
  inline void EnlargeArray();

  /// @brief Method GetFixupEnumerator, addr 0x261109c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator();

  static inline ::System::Runtime::Serialization::ObjectHolderList* New_ctor();

  static inline ::System::Runtime::Serialization::ObjectHolderList* New_ctor(int32_t startingSize);

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> const& __cordl_internal_get_m_values() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*>& __cordl_internal_get_m_values();

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr void __cordl_internal_set_m_values(::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> value);

  /// @brief Method .ctor, addr 0x260e28c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26120d8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t startingSize);

  /// @brief Method get_Count, addr 0x26122c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Version, addr 0x26122bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectHolderList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectHolderList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectHolderList(ObjectHolderList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectHolderList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectHolderList(ObjectHolderList const&) = delete;

  /// @brief Field m_values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> ___m_values;

  /// @brief Field m_count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectHolderList, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectHolderList, ___m_values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectHolderList, ___m_count) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectHolderList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectHolderList*, "System.Runtime.Serialization", "ObjectHolderList");
