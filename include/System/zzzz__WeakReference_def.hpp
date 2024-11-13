#pragma once
// IWYU pragma private; include "System/WeakReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WeakReference)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class WeakReference;
}
// Write type traits
MARK_REF_PTR_T(::System::WeakReference);
// Type: System::WeakReference
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::WeakReference*
class CORDL_TYPE WeakReference : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsAlive)) bool IsAlive;

  __declspec(property(get = get_Target, put = set_Target)) ::System::Object* Target;

  __declspec(property(get = get_TrackResurrection)) bool TrackResurrection;

  /// @brief Field gcHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gcHandle, put = __cordl_internal_set_gcHandle)) ::System::Runtime::InteropServices::GCHandle gcHandle;

  /// @brief Field isLongReference, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isLongReference, put = __cordl_internal_set_isLongReference)) bool isLongReference;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AllocateHandle, addr 0x3de3e80, size 0x28, virtual false, abstract: false, final false
  inline void AllocateHandle(::System::Object* target);

  /// @brief Method Finalize, addr 0x3de40b0, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetObjectData, addr 0x3de414c, size 0x180, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::WeakReference* New_ctor();

  static inline ::System::WeakReference* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::WeakReference* New_ctor(::System::Object* target);

  static inline ::System::WeakReference* New_ctor(::System::Object* target, bool trackResurrection);

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_gcHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_gcHandle();

  constexpr bool const& __cordl_internal_get_isLongReference() const;

  constexpr bool& __cordl_internal_get_isLongReference();

  constexpr void __cordl_internal_set_gcHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set_isLongReference(bool value);

  /// @brief Method .ctor, addr 0x3de3ea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3de3f14, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3de3eb0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target);

  /// @brief Method .ctor, addr 0x3de3ee0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target, bool trackResurrection);

  /// @brief Method get_IsAlive, addr 0x3de4048, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsAlive();

  /// @brief Method get_Target, addr 0x3de4068, size 0x34, virtual true, abstract: false, final false
  inline ::System::Object* get_Target();

  /// @brief Method get_TrackResurrection, addr 0x3de40a8, size 0x8, virtual true, abstract: false, final false
  inline bool get_TrackResurrection();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_Target, addr 0x3de409c, size 0xc, virtual true, abstract: false, final false
  inline void set_Target(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WeakReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WeakReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WeakReference(WeakReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WeakReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WeakReference(WeakReference const&) = delete;

  /// @brief Field isLongReference, offset: 0x10, size: 0x1, def value: None
  bool ___isLongReference;

  /// @brief Field gcHandle, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___gcHandle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::WeakReference, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::WeakReference, ___isLongReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::WeakReference, ___gcHandle) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::WeakReference);
DEFINE_IL2CPP_ARG_TYPE(::System::WeakReference*, "System", "WeakReference");
