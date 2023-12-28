#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__ENetCallbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Callbacks)
namespace ENet {
class FreeCallback;
}
namespace ENet {
struct ENetCallbacks;
}
namespace ENet {
class NoMemoryCallback;
}
namespace ENet {
class AllocCallback;
}
// Forward declare root types
namespace ENet {
class Callbacks;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Callbacks);
// Type: ENet::Callbacks
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15220))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15231))
// CS Name: ::ENet::Callbacks*
class CORDL_TYPE Callbacks : public ::System::Object {
public:
  // Declarations
  /// @brief Field nativeCallbacks, offset 0x10, size 0x18
  __declspec(property(get = __get_nativeCallbacks, put = __set_nativeCallbacks))::ENet::ENetCallbacks nativeCallbacks;

  __declspec(property(get = get_NativeData, put = set_NativeData))::ENet::ENetCallbacks NativeData;

  constexpr ::ENet::ENetCallbacks& __get_nativeCallbacks();

  constexpr ::ENet::ENetCallbacks const& __get_nativeCallbacks() const;

  constexpr void __set_nativeCallbacks(::ENet::ENetCallbacks value);

  /// @brief Method get_NativeData addr 0x21efe4c size 0x14 virtual false final false
  inline ::ENet::ENetCallbacks get_NativeData();

  /// @brief Method set_NativeData addr 0x21efe60 size 0x14 virtual false final false
  inline void set_NativeData(::ENet::ENetCallbacks value);

  static inline ::ENet::Callbacks* New_ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback);

  /// @brief Method .ctor addr 0x21efe74 size 0x3c virtual false final false
  inline void _ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback);

  // Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Callbacks(Callbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Callbacks(Callbacks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Callbacks();

public:
  /// @brief Field nativeCallbacks, offset: 0x10, size: 0x18, def value: None
  ::ENet::ENetCallbacks ___nativeCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Callbacks, 0x28>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::Callbacks);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Callbacks*, "ENet", "Callbacks");
