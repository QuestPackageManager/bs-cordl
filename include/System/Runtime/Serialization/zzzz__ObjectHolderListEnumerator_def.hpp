#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectHolderListEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectHolderListEnumerator)
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolderListEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectHolderListEnumerator);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ObjectHolderListEnumerator
class CORDL_TYPE ObjectHolderListEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Runtime::Serialization::ObjectHolder* Current;

  /// @brief Field m_currPos, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currPos, put = __cordl_internal_set_m_currPos)) int32_t m_currPos;

  /// @brief Field m_isFixupEnumerator, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isFixupEnumerator, put = __cordl_internal_set_m_isFixupEnumerator)) bool m_isFixupEnumerator;

  /// @brief Field m_list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_list, put = __cordl_internal_set_m_list)) ::System::Runtime::Serialization::ObjectHolderList* m_list;

  /// @brief Field m_startingVersion, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_startingVersion, put = __cordl_internal_set_m_startingVersion)) int32_t m_startingVersion;

  /// @brief Method MoveNext, addr 0x3cfaa38, size 0xbc, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Runtime::Serialization::ObjectHolderListEnumerator* New_ctor(::System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator);

  constexpr int32_t const& __cordl_internal_get_m_currPos() const;

  constexpr int32_t& __cordl_internal_get_m_currPos();

  constexpr bool const& __cordl_internal_get_m_isFixupEnumerator() const;

  constexpr bool& __cordl_internal_get_m_isFixupEnumerator();

  constexpr ::System::Runtime::Serialization::ObjectHolderList* const& __cordl_internal_get_m_list() const;

  constexpr ::System::Runtime::Serialization::ObjectHolderList*& __cordl_internal_get_m_list();

  constexpr int32_t const& __cordl_internal_get_m_startingVersion() const;

  constexpr int32_t& __cordl_internal_get_m_startingVersion();

  constexpr void __cordl_internal_set_m_currPos(int32_t value);

  constexpr void __cordl_internal_set_m_isFixupEnumerator(bool value);

  constexpr void __cordl_internal_set_m_list(::System::Runtime::Serialization::ObjectHolderList* value);

  constexpr void __cordl_internal_set_m_startingVersion(int32_t value);

  /// @brief Method .ctor, addr 0x3cfbad0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator);

  /// @brief Method get_Current, addr 0x3cfa9e0, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ObjectHolder* get_Current();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectHolderListEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectHolderListEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectHolderListEnumerator(ObjectHolderListEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectHolderListEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectHolderListEnumerator(ObjectHolderListEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3223 };

  /// @brief Field m_isFixupEnumerator, offset: 0x10, size: 0x1, def value: None
  bool ___m_isFixupEnumerator;

  /// @brief Field m_list, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectHolderList* ___m_list;

  /// @brief Field m_startingVersion, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_startingVersion;

  /// @brief Field m_currPos, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_currPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ObjectHolderListEnumerator, ___m_isFixupEnumerator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectHolderListEnumerator, ___m_list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectHolderListEnumerator, ___m_startingVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectHolderListEnumerator, ___m_currPos) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectHolderListEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectHolderListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectHolderListEnumerator*, "System.Runtime.Serialization", "ObjectHolderListEnumerator");
