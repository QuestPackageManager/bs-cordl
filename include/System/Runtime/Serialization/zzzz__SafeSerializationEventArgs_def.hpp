#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(SafeSerializationEventArgs)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SafeSerializationEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SafeSerializationEventArgs);
// Type: System.Runtime.Serialization::SafeSerializationEventArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2376)), TypeDefinitionIndex(TypeDefinitionIndex(3235))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3225))
// CS Name: ::System.Runtime.Serialization::SafeSerializationEventArgs*
class CORDL_TYPE SafeSerializationEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field m_streamingContext, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_streamingContext, put = __cordl_internal_set_m_streamingContext))::System::Runtime::Serialization::StreamingContext m_streamingContext;

  /// @brief Field m_serializedStates, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializedStates, put = __cordl_internal_set_m_serializedStates))::System::Collections::Generic::List_1<::System::Object*>* m_serializedStates;

  __declspec(property(get = get_SerializedStates))::System::Collections::Generic::IList_1<::System::Object*>* SerializedStates;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_m_streamingContext();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_m_streamingContext() const;

  constexpr void __cordl_internal_set_m_streamingContext(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_m_serializedStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get_m_serializedStates() const;

  constexpr void __cordl_internal_set_m_serializedStates(::System::Collections::Generic::List_1<::System::Object*>* value);

  static inline ::System::Runtime::Serialization::SafeSerializationEventArgs* New_ctor(::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x24bcd94, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_SerializedStates, addr 0x24bce4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Object*>* get_SerializedStates();

  // Ctor Parameters [CppParam { name: "", ty: "SafeSerializationEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeSerializationEventArgs(SafeSerializationEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeSerializationEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeSerializationEventArgs(SafeSerializationEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeSerializationEventArgs();

public:
  /// @brief Field m_streamingContext, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___m_streamingContext;

  /// @brief Field m_serializedStates, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___m_serializedStates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SafeSerializationEventArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SafeSerializationEventArgs, ___m_streamingContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SafeSerializationEventArgs, ___m_serializedStates) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SafeSerializationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SafeSerializationEventArgs*, "System.Runtime.Serialization", "SafeSerializationEventArgs");
