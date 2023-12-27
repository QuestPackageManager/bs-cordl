#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Delegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MulticastDelegate)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Delegate;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MulticastDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::MulticastDelegate);
// Type: System::MulticastDelegate
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2589))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2611))
// CS Name: ::System::MulticastDelegate*
class CORDL_TYPE MulticastDelegate : public ::System::Delegate {
public:
  // Declarations
  /// @brief Field delegates, offset 0x78, size 0x8
  __declspec(property(get = __get_delegates, put = __set_delegates))::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> delegates;

  constexpr ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*>& __get_delegates();

  constexpr ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> const& __get_delegates() const;

  constexpr void __set_delegates(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> value);

  /// @brief Method GetObjectData addr 0x25fe308 size 0x4 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method DynamicInvokeImpl addr 0x25fe30c size 0x90 virtual true final true
  inline ::System::Object* DynamicInvokeImpl(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Equals addr 0x25fe39c size 0x144 virtual true final true
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x25fe4e0 size 0x4 virtual true final true
  inline int32_t GetHashCode();

  /// @brief Method GetMethodImpl addr 0x25fe4e4 size 0x48 virtual true final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl();

  /// @brief Method GetInvocationList addr 0x25fe52c size 0xcc virtual true final true
  inline ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> GetInvocationList();

  /// @brief Method CombineImpl addr 0x25fe5f8 size 0x268 virtual true final true
  inline ::System::Delegate* CombineImpl(::System::Delegate* follow);

  /// @brief Method LastIndexOf addr 0x25fe860 size 0x12c virtual false final false
  inline int32_t LastIndexOf(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> haystack, ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> needle);

  /// @brief Method RemoveImpl addr 0x25fe98c size 0x2e0 virtual true final true
  inline ::System::Delegate* RemoveImpl(::System::Delegate* value);

  // Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticastDelegate(MulticastDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticastDelegate(MulticastDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticastDelegate();

public:
  /// @brief Field delegates, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> ___delegates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MulticastDelegate, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MulticastDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::MulticastDelegate*, "System", "MulticastDelegate");
