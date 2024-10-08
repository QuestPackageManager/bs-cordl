#pragma once
// IWYU pragma private; include "System/WeakReference_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(WeakReference_1)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
template <typename T> class WeakReference_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::WeakReference_1);
// Type: System::WeakReference`1
// SizeInfo { instance_size: 32, native_size: 25, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System::WeakReference`1<T>*
class CORDL_TYPE WeakReference_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::System::Runtime::InteropServices::GCHandle handle;

  /// @brief Field trackResurrection, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_trackResurrection, put = __cordl_internal_set_trackResurrection)) bool trackResurrection;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::WeakReference_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::WeakReference_1<T>* New_ctor(T target);

  static inline ::System::WeakReference_1<T>* New_ctor(T target, bool trackResurrection);

  /// @brief Method SetTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetTarget(T target);

  /// @brief Method TryGetTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetTarget(ByRef<T> target);

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_handle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_handle();

  constexpr bool const& __cordl_internal_get_trackResurrection() const;

  constexpr bool& __cordl_internal_get_trackResurrection();

  constexpr void __cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set_trackResurrection(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T target);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T target, bool trackResurrection);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WeakReference_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WeakReference_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WeakReference_1(WeakReference_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WeakReference_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WeakReference_1(WeakReference_1 const&) = delete;

  /// @brief Field handle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___handle;

  /// @brief Field trackResurrection, offset: 0x18, size: 0x1, def value: None
  bool ___trackResurrection;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::WeakReference_1, "System", "WeakReference`1");
