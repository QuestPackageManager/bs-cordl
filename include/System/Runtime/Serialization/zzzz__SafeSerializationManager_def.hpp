#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SafeSerializationManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SafeSerializationManager)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class SafeSerializationEventArgs;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SafeSerializationManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SafeSerializationManager);
// Dependencies System.Object, System.Runtime.Serialization.IObjectReference, System.Runtime.Serialization.ISerializable
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SafeSerializationManager
class CORDL_TYPE SafeSerializationManager : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsActive)) bool IsActive;

  /// @brief Field SerializeObjectState, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_SerializeObjectState,
                      put = __cordl_internal_set_SerializeObjectState)) ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* SerializeObjectState;

  /// @brief Field m_realObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_realObject, put = __cordl_internal_set_m_realObject)) ::System::Object* m_realObject;

  /// @brief Field m_realType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_realType, put = __cordl_internal_set_m_realType)) ::System::RuntimeType* m_realType;

  /// @brief Field m_savedSerializationInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_savedSerializationInfo,
                      put = __cordl_internal_set_m_savedSerializationInfo)) ::System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo;

  /// @brief Field m_serializedStates, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializedStates, put = __cordl_internal_set_m_serializedStates)) ::System::Collections::Generic::IList_1<::System::Object*>* m_serializedStates;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CompleteDeserialization, addr 0x3cfc7b0, size 0x39c, virtual false, abstract: false, final false
  inline void CompleteDeserialization(::System::Object* deserializedObject);

  /// @brief Method CompleteSerialization, addr 0x3cfc48c, size 0x174, virtual false, abstract: false, final false
  inline void CompleteSerialization(::System::Object* serializedObject, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Serialization::SafeSerializationManager* New_ctor();

  static inline ::System::Runtime::Serialization::SafeSerializationManager* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                     ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialized, addr 0x3cfceb0, size 0x9c, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.IObjectReference.GetRealObject, addr 0x3cfcbfc, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::Object* System_Runtime_Serialization_IObjectReference_GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3cfcb4c, size 0xb0, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* const& __cordl_internal_get_SerializeObjectState() const;

  constexpr ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*& __cordl_internal_get_SerializeObjectState();

  constexpr ::System::Object* const& __cordl_internal_get_m_realObject() const;

  constexpr ::System::Object*& __cordl_internal_get_m_realObject();

  constexpr ::System::RuntimeType* const& __cordl_internal_get_m_realType() const;

  constexpr ::System::RuntimeType*& __cordl_internal_get_m_realType();

  constexpr ::System::Runtime::Serialization::SerializationInfo* const& __cordl_internal_get_m_savedSerializationInfo() const;

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get_m_savedSerializationInfo();

  constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& __cordl_internal_get_m_serializedStates() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& __cordl_internal_get_m_serializedStates();

  constexpr void __cordl_internal_set_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* value);

  constexpr void __cordl_internal_set_m_realObject(::System::Object* value);

  constexpr void __cordl_internal_set_m_realType(::System::RuntimeType* value);

  constexpr void __cordl_internal_set_m_savedSerializationInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set_m_serializedStates(::System::Collections::Generic::IList_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x3cfbf80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cfbf88, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_IsActive, addr 0x3cfc47c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsActive();

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeSerializationManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeSerializationManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeSerializationManager(SafeSerializationManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeSerializationManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeSerializationManager(SafeSerializationManager const&) = delete;

  /// @brief Field RealTypeSerializationName offset 0xffffffff size 0x8
  static constexpr ::ConstString RealTypeSerializationName{ u"CLR_SafeSerializationManager_RealType" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3227 };

  /// @brief Field m_serializedStates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Object*>* ___m_serializedStates;

  /// @brief Field m_savedSerializationInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ___m_savedSerializationInfo;

  /// @brief Field m_realObject, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___m_realObject;

  /// @brief Field m_realType, offset: 0x28, size: 0x8, def value: None
  ::System::RuntimeType* ___m_realType;

  /// @brief Field SerializeObjectState, offset: 0x30, size: 0x8, def value: None
  ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* ___SerializeObjectState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SafeSerializationManager, ___m_serializedStates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SafeSerializationManager, ___m_savedSerializationInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SafeSerializationManager, ___m_realObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SafeSerializationManager, ___m_realType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SafeSerializationManager, ___SerializeObjectState) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SafeSerializationManager, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SafeSerializationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SafeSerializationManager*, "System.Runtime.Serialization", "SafeSerializationManager");
