#pragma once
// IWYU pragma private; include "System/Runtime/Interop/UnsafeNativeMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeNativeMethods)
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::Runtime::Interop {
class SafeEventLogWriteHandle;
}
namespace System::Runtime::Interop {
class UnsafeNativeMethods_EtwEnableCallback;
}
namespace System::Runtime::Interop {
struct UnsafeNativeMethods_EventData;
}
namespace System {
struct Guid;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Interop {
class UnsafeNativeMethods;
}
namespace System::Runtime::Interop {
class UnsafeNativeMethods_EtwEnableCallback;
}
namespace System::Runtime::Interop {
struct UnsafeNativeMethods_EventData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Interop::UnsafeNativeMethods);
MARK_REF_PTR_T(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback);
MARK_VAL_T(::System::Runtime::Interop::UnsafeNativeMethods_EventData);
// Dependencies
namespace System::Runtime::Interop {
// Is value type: true
// CS Name: System.Runtime.Interop.UnsafeNativeMethods/EventData
#pragma pack(push, 0)
struct CORDL_TYPE UnsafeNativeMethods_EventData {
public:
  // Declarations
  /// @brief Field DataPointer, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_DataPointer, put = __cordl_internal_set_DataPointer)) uint64_t DataPointer;

  /// @brief Field Reserved, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_Reserved, put = __cordl_internal_set_Reserved)) int32_t Reserved;

  /// @brief Field Size, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) uint32_t Size;

  constexpr uint64_t const& __cordl_internal_get_DataPointer() const;

  constexpr uint64_t& __cordl_internal_get_DataPointer();

  constexpr int32_t const& __cordl_internal_get_Reserved() const;

  constexpr int32_t& __cordl_internal_get_Reserved();

  constexpr uint32_t const& __cordl_internal_get_Size() const;

  constexpr uint32_t& __cordl_internal_get_Size();

  constexpr void __cordl_internal_set_DataPointer(uint64_t value);

  constexpr void __cordl_internal_set_Reserved(int32_t value);

  constexpr void __cordl_internal_set_Size(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeNativeMethods_EventData();

  // Ctor Parameters [CppParam { name: "DataPointer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Reserved", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeNativeMethods_EventData(uint64_t DataPointer, uint32_t Size, int32_t Reserved) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___DataPointer_padding[0x0];
      /// @brief Field DataPointer, offset: 0x0, size: 0x8, def value: None
      uint64_t ___DataPointer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___DataPointer_padding_forAlignment[0x0];
      /// @brief Field DataPointer, offset: 0x0, size: 0x8, def value: None
      uint64_t ___DataPointer_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___Size_padding[0x8];
      /// @brief Field Size, offset: 0x8, size: 0x4, def value: None
      uint32_t ___Size;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___Size_padding_forAlignment[0x8];
      /// @brief Field Size, offset: 0x8, size: 0x4, def value: None
      uint32_t ___Size_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___Reserved_padding[0xc];
      /// @brief Field Reserved, offset: 0xc, size: 0x4, def value: None
      int32_t ___Reserved;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___Reserved_padding_forAlignment[0xc];
      /// @brief Field Reserved, offset: 0xc, size: 0x4, def value: None
      int32_t ___Reserved_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21122 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Interop::UnsafeNativeMethods_EventData, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Interop
// Dependencies System.MulticastDelegate
namespace System::Runtime::Interop {
// Is value type: false
// CS Name: System.Runtime.Interop.UnsafeNativeMethods/EtwEnableCallback
class CORDL_TYPE UnsafeNativeMethods_EtwEnableCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5fd6278, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::System::Guid> sourceId, ::ByRefConst<int32_t> isEnabled, ::ByRefConst<uint8_t> level, ::ByRefConst<int64_t> matchAnyKeywords, ::ByRefConst<int64_t> matchAllKeywords,
                     ::ByRefConst<void*> filterData, ::ByRefConst<void*> callbackContext);

  static inline ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5fd61f8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeNativeMethods_EtwEnableCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods_EtwEnableCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeNativeMethods_EtwEnableCallback(UnsafeNativeMethods_EtwEnableCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods_EtwEnableCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeNativeMethods_EtwEnableCallback(UnsafeNativeMethods_EtwEnableCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Interop
// Dependencies System.Object
namespace System::Runtime::Interop {
// Is value type: false
// CS Name: System.Runtime.Interop.UnsafeNativeMethods
class CORDL_TYPE UnsafeNativeMethods : public ::System::Object {
public:
  // Declarations
  using EtwEnableCallback = ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback;

  using EventData = ::System::Runtime::Interop::UnsafeNativeMethods_EventData;

  /// @brief Method EventActivityIdControl, addr 0x5fd6038, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t EventActivityIdControl(::ByRefConst<int32_t> ControlCode, ::ByRef<::System::Guid> ActivityId);

  /// @brief Method EventEnabled, addr 0x5fd5f0c, size 0x8c, virtual false, abstract: false, final false
  static inline bool EventEnabled(::ByRefConst<int64_t> registrationHandle, ::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor);

  /// @brief Method EventRegister, addr 0x5fd5de4, size 0xa8, virtual false, abstract: false, final false
  static inline uint32_t EventRegister(::ByRef<::System::Guid> providerId, ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*> enableCallback,
                                       ::ByRefConst<void*> callbackContext, ::ByRef<int64_t> registrationHandle);

  /// @brief Method EventUnregister, addr 0x5fd5e8c, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t EventUnregister(::ByRefConst<int64_t> registrationHandle);

  /// @brief Method EventWrite, addr 0x5fd5f98, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t EventWrite(::ByRefConst<int64_t> registrationHandle, ::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::ByRefConst<uint32_t> userDataCount,
                                    ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EventData*> userData);

  /// @brief Method RegisterEventSource, addr 0x5fd5c38, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Interop::SafeEventLogWriteHandle* RegisterEventSource(::StringW uncServerName, ::StringW sourceName);

  /// @brief Method ReportEvent, addr 0x5fd60bc, size 0x13c, virtual false, abstract: false, final false
  static inline bool ReportEvent(::System::Runtime::InteropServices::SafeHandle* hEventLog, uint16_t type, uint16_t category, uint32_t eventID, ::ArrayW<uint8_t, ::Array<uint8_t>*> userSID,
                                 uint16_t numStrings, uint32_t dataLen, ::System::Runtime::InteropServices::HandleRef strings, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeNativeMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeNativeMethods(UnsafeNativeMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeNativeMethods(UnsafeNativeMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21124 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Interop::UnsafeNativeMethods, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Interop
NEED_NO_BOX(::System::Runtime::Interop::UnsafeNativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Interop::UnsafeNativeMethods*, "System.Runtime.Interop", "UnsafeNativeMethods");
NEED_NO_BOX(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*, "System.Runtime.Interop", "UnsafeNativeMethods/EtwEnableCallback");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Interop::UnsafeNativeMethods_EventData, "System.Runtime.Interop", "UnsafeNativeMethods/EventData");
