#pragma once
// IWYU pragma private; include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Delegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MulticastDelegate)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Delegate;
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
// Dependencies System.Delegate
namespace System {
// Is value type: false
// CS Name: System.MulticastDelegate
class CORDL_TYPE MulticastDelegate : public ::System::Delegate {
public:
  // Declarations
  /// @brief Field delegates, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_delegates, put = __cordl_internal_set_delegates)) ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> delegates;

  /// @brief Method CombineImpl, addr 0x5a807ec, size 0x264, virtual true, abstract: false, final true
  inline ::System::Delegate* CombineImpl(::System::Delegate* follow);

  /// @brief Method DynamicInvokeImpl, addr 0x5a80518, size 0x98, virtual true, abstract: false, final true
  inline ::System::Object* DynamicInvokeImpl(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Equals, addr 0x5a805b0, size 0x120, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5a806d0, size 0x4, virtual true, abstract: false, final true
  inline int32_t GetHashCode();

  /// @brief Method GetInvocationList, addr 0x5a8071c, size 0xd0, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> GetInvocationList();

  /// @brief Method GetMethodImpl, addr 0x5a806d4, size 0x48, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl();

  /// @brief Method GetObjectData, addr 0x5a80514, size 0x4, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method LastIndexOf, addr 0x5a80a50, size 0x130, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> haystack, ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> needle);

  /// @brief Method RemoveImpl, addr 0x5a80b80, size 0x2f4, virtual true, abstract: false, final true
  inline ::System::Delegate* RemoveImpl(::System::Delegate* value);

  constexpr ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> const& __cordl_internal_get_delegates() const;

  constexpr ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*>& __cordl_internal_get_delegates();

  constexpr void __cordl_internal_set_delegates(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticastDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticastDelegate(MulticastDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticastDelegate(MulticastDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2621 };

  /// @brief Field delegates, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> ___delegates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MulticastDelegate, ___delegates) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::MulticastDelegate, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MulticastDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::MulticastDelegate*, "System", "MulticastDelegate");
