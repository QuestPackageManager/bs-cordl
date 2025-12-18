#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FixupHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixupHolder)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FixupHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::FixupHolder);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FixupHolder
class CORDL_TYPE FixupHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_fixupInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fixupInfo, put = __cordl_internal_set_m_fixupInfo)) ::System::Object* m_fixupInfo;

  /// @brief Field m_fixupType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fixupType, put = __cordl_internal_set_m_fixupType)) int32_t m_fixupType;

  /// @brief Field m_id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_id, put = __cordl_internal_set_m_id)) int64_t m_id;

  static inline ::System::Runtime::Serialization::FixupHolder* New_ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType);

  constexpr ::System::Object* const& __cordl_internal_get_m_fixupInfo() const;

  constexpr ::System::Object*& __cordl_internal_get_m_fixupInfo();

  constexpr int32_t const& __cordl_internal_get_m_fixupType() const;

  constexpr int32_t& __cordl_internal_get_m_fixupType();

  constexpr int64_t const& __cordl_internal_get_m_id() const;

  constexpr int64_t& __cordl_internal_get_m_id();

  constexpr void __cordl_internal_set_m_fixupInfo(::System::Object* value);

  constexpr void __cordl_internal_set_m_fixupType(int32_t value);

  constexpr void __cordl_internal_set_m_id(int64_t value);

  /// @brief Method .ctor, addr 0x59a33f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixupHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixupHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixupHolder(FixupHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixupHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixupHolder(FixupHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3235 };

  /// @brief Field m_id, offset: 0x10, size: 0x8, def value: None
  int64_t ___m_id;

  /// @brief Field m_fixupInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_fixupInfo;

  /// @brief Field m_fixupType, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_fixupType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::FixupHolder, ___m_id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::FixupHolder, ___m_fixupInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::FixupHolder, ___m_fixupType) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FixupHolder, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FixupHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FixupHolder*, "System.Runtime.Serialization", "FixupHolder");
