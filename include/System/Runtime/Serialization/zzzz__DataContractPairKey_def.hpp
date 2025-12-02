#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractPairKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataContractPairKey)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContractPairKey);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataContractPairKey
class CORDL_TYPE DataContractPairKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field object1, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_object1, put = __cordl_internal_set_object1)) ::System::Object* object1;

  /// @brief Field object2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_object2, put = __cordl_internal_set_object2)) ::System::Object* object2;

  /// @brief Method Equals, addr 0x5f2ecdc, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x5f2eda8, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Runtime::Serialization::DataContractPairKey* New_ctor(::System::Object* object1, ::System::Object* object2);

  constexpr ::System::Object* const& __cordl_internal_get_object1() const;

  constexpr ::System::Object*& __cordl_internal_get_object1();

  constexpr ::System::Object* const& __cordl_internal_get_object2() const;

  constexpr ::System::Object*& __cordl_internal_get_object2();

  constexpr void __cordl_internal_set_object1(::System::Object* value);

  constexpr void __cordl_internal_set_object2(::System::Object* value);

  /// @brief Method .ctor, addr 0x5f2b48c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object1, ::System::Object* object2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContractPairKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataContractPairKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContractPairKey(DataContractPairKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContractPairKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContractPairKey(DataContractPairKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16972 };

  /// @brief Field object1, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___object1;

  /// @brief Field object2, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___object2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DataContractPairKey, ___object1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractPairKey, ___object2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContractPairKey, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataContractPairKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContractPairKey*, "System.Runtime.Serialization", "DataContractPairKey");
