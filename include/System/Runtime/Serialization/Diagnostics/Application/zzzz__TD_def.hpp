#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Diagnostics/Application/TD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TD)
namespace System::Runtime::Diagnostics {
class EventTraceActivity;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Diagnostics::Application {
class TD;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::Diagnostics::Application::TD*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::Diagnostics::Application::TD*, "System.Runtime.Serialization.Diagnostics.Application", "TD");
// Dependencies System.Object, System.Runtime.Diagnostics.EventDescriptor
namespace System::Runtime::Serialization::Diagnostics::Application {
// Is value type: false
// CS Name: System.Runtime.Serialization.Diagnostics.Application.TD
class CORDL_TYPE TD : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_eventDescriptors, put = setStaticF_eventDescriptors)) ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptors;

  /// @brief Field eventDescriptorsCreated, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_eventDescriptorsCreated, put = setStaticF_eventDescriptorsCreated)) bool eventDescriptorsCreated;

  /// @brief Field syncLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_syncLock, put = setStaticF_syncLock)) ::System::Object* syncLock;

  /// @brief Method CreateEventDescriptors, addr 0x65ad0d0, size 0x244, virtual false, abstract: false, final false
  static inline void CreateEventDescriptors();

  /// @brief Method DCDeserializeWithSurrogateStart, addr 0x65ac2f4, size 0xe8, virtual false, abstract: false, final false
  static inline void DCDeserializeWithSurrogateStart(::StringW SurrogateType);

  /// @brief Method DCDeserializeWithSurrogateStartIsEnabled, addr 0x65ac25c, size 0x98, virtual false, abstract: false, final false
  static inline bool DCDeserializeWithSurrogateStartIsEnabled();

  /// @brief Method DCDeserializeWithSurrogateStop, addr 0x65ac474, size 0xe0, virtual false, abstract: false, final false
  static inline void DCDeserializeWithSurrogateStop();

  /// @brief Method DCDeserializeWithSurrogateStopIsEnabled, addr 0x65ac3dc, size 0x98, virtual false, abstract: false, final false
  static inline bool DCDeserializeWithSurrogateStopIsEnabled();

  /// @brief Method DCGenReaderStart, addr 0x65ace5c, size 0xfc, virtual false, abstract: false, final false
  static inline void DCGenReaderStart(::StringW Kind, ::StringW TypeName);

  /// @brief Method DCGenReaderStartIsEnabled, addr 0x65acdc4, size 0x98, virtual false, abstract: false, final false
  static inline bool DCGenReaderStartIsEnabled();

  /// @brief Method DCGenReaderStop, addr 0x65acff0, size 0xe0, virtual false, abstract: false, final false
  static inline void DCGenReaderStop();

  /// @brief Method DCGenReaderStopIsEnabled, addr 0x65acf58, size 0x98, virtual false, abstract: false, final false
  static inline bool DCGenReaderStopIsEnabled();

  /// @brief Method DCGenWriterStart, addr 0x65aca5c, size 0xfc, virtual false, abstract: false, final false
  static inline void DCGenWriterStart(::StringW Kind, ::StringW TypeName);

  /// @brief Method DCGenWriterStartIsEnabled, addr 0x65ac9c4, size 0x98, virtual false, abstract: false, final false
  static inline bool DCGenWriterStartIsEnabled();

  /// @brief Method DCGenWriterStop, addr 0x65acce4, size 0xe0, virtual false, abstract: false, final false
  static inline void DCGenWriterStop();

  /// @brief Method DCGenWriterStopIsEnabled, addr 0x65acc4c, size 0x98, virtual false, abstract: false, final false
  static inline bool DCGenWriterStopIsEnabled();

  /// @brief Method DCResolverResolve, addr 0x65ac8dc, size 0xe8, virtual false, abstract: false, final false
  static inline void DCResolverResolve(::StringW TypeName);

  /// @brief Method DCResolverResolveIsEnabled, addr 0x65ac844, size 0x98, virtual false, abstract: false, final false
  static inline bool DCResolverResolveIsEnabled();

  /// @brief Method DCSerializeWithSurrogateStart, addr 0x65abf20, size 0xe8, virtual false, abstract: false, final false
  static inline void DCSerializeWithSurrogateStart(::StringW SurrogateType);

  /// @brief Method DCSerializeWithSurrogateStartIsEnabled, addr 0x65abe88, size 0x98, virtual false, abstract: false, final false
  static inline bool DCSerializeWithSurrogateStartIsEnabled();

  /// @brief Method DCSerializeWithSurrogateStop, addr 0x65ac0a0, size 0xe0, virtual false, abstract: false, final false
  static inline void DCSerializeWithSurrogateStop();

  /// @brief Method DCSerializeWithSurrogateStopIsEnabled, addr 0x65ac008, size 0x98, virtual false, abstract: false, final false
  static inline bool DCSerializeWithSurrogateStopIsEnabled();

  /// @brief Method EnsureEventDescriptors, addr 0x65ad314, size 0x150, virtual false, abstract: false, final false
  static inline void EnsureEventDescriptors();

  /// @brief Method ImportKnownTypesStart, addr 0x65ac5ec, size 0xe0, virtual false, abstract: false, final false
  static inline void ImportKnownTypesStart();

  /// @brief Method ImportKnownTypesStartIsEnabled, addr 0x65ac554, size 0x98, virtual false, abstract: false, final false
  static inline bool ImportKnownTypesStartIsEnabled();

  /// @brief Method ImportKnownTypesStop, addr 0x65ac764, size 0xe0, virtual false, abstract: false, final false
  static inline void ImportKnownTypesStop();

  /// @brief Method ImportKnownTypesStopIsEnabled, addr 0x65ac6cc, size 0x98, virtual false, abstract: false, final false
  static inline bool ImportKnownTypesStopIsEnabled();

  /// @brief Method IsEtwEventEnabled, addr 0x65abc04, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsEtwEventEnabled(int32_t eventIndex);

  /// @brief Method ReaderQuotaExceeded, addr 0x65abcb4, size 0xe8, virtual false, abstract: false, final false
  static inline void ReaderQuotaExceeded(::StringW param0);

  /// @brief Method ReaderQuotaExceededIsEnabled, addr 0x65abb6c, size 0x98, virtual false, abstract: false, final false
  static inline bool ReaderQuotaExceededIsEnabled();

  /// @brief Method WriteEtwEvent, addr 0x65ac180, size 0xdc, virtual false, abstract: false, final false
  static inline bool WriteEtwEvent(int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0, ::StringW eventParam1);

  /// @brief Method WriteEtwEvent, addr 0x65abd9c, size 0xec, virtual false, abstract: false, final false
  static inline bool WriteEtwEvent(int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0, ::StringW eventParam1, ::StringW eventParam2);

  /// @brief Method WriteEtwEvent, addr 0x65acb58, size 0xf4, virtual false, abstract: false, final false
  static inline bool WriteEtwEvent(int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0, ::StringW eventParam1, ::StringW eventParam2, ::StringW eventParam3);

  static inline ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> getStaticF_eventDescriptors();

  static inline bool getStaticF_eventDescriptorsCreated();

  static inline ::System::Object* getStaticF_syncLock();

  static inline void setStaticF_eventDescriptors(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> value);

  static inline void setStaticF_eventDescriptorsCreated(bool value);

  static inline void setStaticF_syncLock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TD", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TD(TD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TD", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TD(TD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::Diagnostics::Application::TD) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization::Diagnostics::Application
