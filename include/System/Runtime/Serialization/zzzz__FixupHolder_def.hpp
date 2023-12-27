#pragma once
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
// Type: System.Runtime.Serialization::FixupHolder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3219))
// CS Name: ::System.Runtime.Serialization::FixupHolder*
class CORDL_TYPE FixupHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_id, offset 0x10, size 0x8
  __declspec(property(get = __get_m_id, put = __set_m_id)) int64_t m_id;

  /// @brief Field m_fixupInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_m_fixupInfo, put = __set_m_fixupInfo))::System::Object* m_fixupInfo;

  /// @brief Field m_fixupType, offset 0x20, size 0x4
  __declspec(property(get = __get_m_fixupType, put = __set_m_fixupType)) int32_t m_fixupType;

  constexpr int64_t& __get_m_id();

  constexpr int64_t const& __get_m_id() const;

  constexpr void __set_m_id(int64_t value);

  constexpr ::System::Object*& __get_m_fixupInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_fixupInfo() const;

  constexpr void __set_m_fixupInfo(::System::Object* value);

  constexpr int32_t& __get_m_fixupType();

  constexpr int32_t const& __get_m_fixupType() const;

  constexpr void __set_m_fixupType(int32_t value);

  static inline ::System::Runtime::Serialization::FixupHolder* New_ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType);

  /// @brief Method .ctor addr 0x24bc15c size 0x3c virtual false final false
  inline void _ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType);

  // Ctor Parameters [CppParam { name: "", ty: "FixupHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixupHolder(FixupHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixupHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixupHolder(FixupHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixupHolder();

public:
  /// @brief Field m_id, offset: 0x10, size: 0x8, def value: None
  int64_t ___m_id;

  /// @brief Field m_fixupInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_fixupInfo;

  /// @brief Field m_fixupType, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_fixupType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FixupHolder, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FixupHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FixupHolder*, "System.Runtime.Serialization", "FixupHolder");
