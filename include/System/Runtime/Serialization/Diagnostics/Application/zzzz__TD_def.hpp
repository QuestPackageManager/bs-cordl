#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Diagnostics/Application/TD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TD)
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
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
MARK_REF_PTR_T(::System::Runtime::Serialization::Diagnostics::Application::TD);
// Dependencies System.Object
namespace System::Runtime::Serialization::Diagnostics::Application {
// Is value type: false
// CS Name: System.Runtime.Serialization.Diagnostics.Application.TD
class CORDL_TYPE TD : public ::System::Object {
public:
// Declarations
/// @brief Field eventDescriptors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_eventDescriptors, put=setStaticF_eventDescriptors)) ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor,::Array<::System::Runtime::Diagnostics::EventDescriptor>*>  eventDescriptors;

/// @brief Field eventDescriptorsCreated, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_eventDescriptorsCreated, put=setStaticF_eventDescriptorsCreated)) bool  eventDescriptorsCreated;

/// @brief Field syncLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_syncLock, put=setStaticF_syncLock)) ::System::Object*  syncLock;

/// @brief Method CreateEventDescriptors, addr 0x6044c6c, size 0x244, virtual false, abstract: false, final false
static inline void CreateEventDescriptors() ;

/// @brief Method DCDeserializeWithSurrogateStart, addr 0x6044110, size 0xa8, virtual false, abstract: false, final false
static inline void DCDeserializeWithSurrogateStart(::StringW  SurrogateType) ;

/// @brief Method DCDeserializeWithSurrogateStartIsEnabled, addr 0x6044080, size 0x90, virtual false, abstract: false, final false
static inline bool DCDeserializeWithSurrogateStartIsEnabled() ;

/// @brief Method DCDeserializeWithSurrogateStop, addr 0x6044248, size 0xa8, virtual false, abstract: false, final false
static inline void DCDeserializeWithSurrogateStop() ;

/// @brief Method DCDeserializeWithSurrogateStopIsEnabled, addr 0x60441b8, size 0x90, virtual false, abstract: false, final false
static inline bool DCDeserializeWithSurrogateStopIsEnabled() ;

/// @brief Method DCGenReaderStart, addr 0x6044a8c, size 0xa8, virtual false, abstract: false, final false
static inline void DCGenReaderStart(::StringW  Kind, ::StringW  TypeName) ;

/// @brief Method DCGenReaderStartIsEnabled, addr 0x60449fc, size 0x90, virtual false, abstract: false, final false
static inline bool DCGenReaderStartIsEnabled() ;

/// @brief Method DCGenReaderStop, addr 0x6044bc4, size 0xa8, virtual false, abstract: false, final false
static inline void DCGenReaderStop() ;

/// @brief Method DCGenReaderStopIsEnabled, addr 0x6044b34, size 0x90, virtual false, abstract: false, final false
static inline bool DCGenReaderStopIsEnabled() ;

/// @brief Method DCGenWriterStart, addr 0x6044728, size 0xa8, virtual false, abstract: false, final false
static inline void DCGenWriterStart(::StringW  Kind, ::StringW  TypeName) ;

/// @brief Method DCGenWriterStartIsEnabled, addr 0x6044698, size 0x90, virtual false, abstract: false, final false
static inline bool DCGenWriterStartIsEnabled() ;

/// @brief Method DCGenWriterStop, addr 0x6044954, size 0xa8, virtual false, abstract: false, final false
static inline void DCGenWriterStop() ;

/// @brief Method DCGenWriterStopIsEnabled, addr 0x60448c4, size 0x90, virtual false, abstract: false, final false
static inline bool DCGenWriterStopIsEnabled() ;

/// @brief Method DCResolverResolve, addr 0x60445f0, size 0xa8, virtual false, abstract: false, final false
static inline void DCResolverResolve(::StringW  TypeName) ;

/// @brief Method DCResolverResolveIsEnabled, addr 0x6044560, size 0x90, virtual false, abstract: false, final false
static inline bool DCResolverResolveIsEnabled() ;

/// @brief Method DCSerializeWithSurrogateStart, addr 0x6043dc4, size 0xa8, virtual false, abstract: false, final false
static inline void DCSerializeWithSurrogateStart(::StringW  SurrogateType) ;

/// @brief Method DCSerializeWithSurrogateStartIsEnabled, addr 0x6043d34, size 0x90, virtual false, abstract: false, final false
static inline bool DCSerializeWithSurrogateStartIsEnabled() ;

/// @brief Method DCSerializeWithSurrogateStop, addr 0x6043efc, size 0xa8, virtual false, abstract: false, final false
static inline void DCSerializeWithSurrogateStop() ;

/// @brief Method DCSerializeWithSurrogateStopIsEnabled, addr 0x6043e6c, size 0x90, virtual false, abstract: false, final false
static inline bool DCSerializeWithSurrogateStopIsEnabled() ;

/// @brief Method EnsureEventDescriptors, addr 0x6044eb0, size 0x150, virtual false, abstract: false, final false
static inline void EnsureEventDescriptors() ;

/// @brief Method ImportKnownTypesStart, addr 0x6044380, size 0xa8, virtual false, abstract: false, final false
static inline void ImportKnownTypesStart() ;

/// @brief Method ImportKnownTypesStartIsEnabled, addr 0x60442f0, size 0x90, virtual false, abstract: false, final false
static inline bool ImportKnownTypesStartIsEnabled() ;

/// @brief Method ImportKnownTypesStop, addr 0x60444b8, size 0xa8, virtual false, abstract: false, final false
static inline void ImportKnownTypesStop() ;

/// @brief Method ImportKnownTypesStopIsEnabled, addr 0x6044428, size 0x90, virtual false, abstract: false, final false
static inline bool ImportKnownTypesStopIsEnabled() ;

/// @brief Method IsEtwEventEnabled, addr 0x6043af0, size 0xb0, virtual false, abstract: false, final false
static inline bool IsEtwEventEnabled(int32_t  eventIndex) ;

/// @brief Method ReaderQuotaExceeded, addr 0x6043ba0, size 0xa8, virtual false, abstract: false, final false
static inline void ReaderQuotaExceeded(::StringW  param0) ;

/// @brief Method ReaderQuotaExceededIsEnabled, addr 0x6043a60, size 0x90, virtual false, abstract: false, final false
static inline bool ReaderQuotaExceededIsEnabled() ;

/// @brief Method WriteEtwEvent, addr 0x6043fa4, size 0xdc, virtual false, abstract: false, final false
static inline bool WriteEtwEvent(int32_t  eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity*  eventParam0, ::StringW  eventParam1) ;

/// @brief Method WriteEtwEvent, addr 0x6043c48, size 0xec, virtual false, abstract: false, final false
static inline bool WriteEtwEvent(int32_t  eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity*  eventParam0, ::StringW  eventParam1, ::StringW  eventParam2) ;

/// @brief Method WriteEtwEvent, addr 0x60447d0, size 0xf4, virtual false, abstract: false, final false
static inline bool WriteEtwEvent(int32_t  eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity*  eventParam0, ::StringW  eventParam1, ::StringW  eventParam2, ::StringW  eventParam3) ;

static inline ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor,::Array<::System::Runtime::Diagnostics::EventDescriptor>*> getStaticF_eventDescriptors() ;

static inline bool getStaticF_eventDescriptorsCreated() ;

static inline ::System::Object* getStaticF_syncLock() ;

static inline void setStaticF_eventDescriptors(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor,::Array<::System::Runtime::Diagnostics::EventDescriptor>*>  value) ;

static inline void setStaticF_eventDescriptorsCreated(bool  value) ;

static inline void setStaticF_syncLock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TD(TD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TD(TD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Diagnostics::Application::TD, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Diagnostics::Application
NEED_NO_BOX(::System::Runtime::Serialization::Diagnostics::Application::TD);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Diagnostics::Application::TD*, "System.Runtime.Serialization.Diagnostics.Application", "TD");
