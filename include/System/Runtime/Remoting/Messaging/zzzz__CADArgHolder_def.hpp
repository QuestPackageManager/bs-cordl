#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CADArgHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADArgHolder)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADArgHolder);
// Type: System.Runtime.Remoting.Messaging::CADArgHolder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::CADArgHolder*
class CORDL_TYPE CADArgHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::System::Runtime::Remoting::Messaging::CADArgHolder* New_ctor(int32_t i);

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x3c71a04, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t i);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADArgHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CADArgHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADArgHolder(CADArgHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADArgHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADArgHolder(CADArgHolder const&) = delete;

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3151 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADArgHolder, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADArgHolder, ___index) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADArgHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADArgHolder*, "System.Runtime.Remoting.Messaging", "CADArgHolder");
