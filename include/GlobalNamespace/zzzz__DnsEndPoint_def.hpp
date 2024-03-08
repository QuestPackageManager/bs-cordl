#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DnsEndPoint)
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class DnsEndPoint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DnsEndPoint);
// Type: ::DnsEndPoint
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DnsEndPoint*
class CORDL_TYPE DnsEndPoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field _getEndPointTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__getEndPointTask, put = __cordl_internal_set__getEndPointTask))::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* _getEndPointTask;

  __declspec(property(get = get_endPoint))::System::Net::IPEndPoint* endPoint;

  /// @brief Field hostName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hostName, put = __cordl_internal_set_hostName))::StringW hostName;

  /// @brief Field port, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*() noexcept;

  /// @brief Method Equals, addr 0xec5650, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xec56f0, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::DnsEndPoint* other);

  /// @brief Method GetEndPoint, addr 0xec5480, size 0x94, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* GetEndPoint();

  /// @brief Method GetEndPointAsync, addr 0xec5360, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* GetEndPointAsync(::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method GetEndPointInternal, addr 0xec5514, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* GetEndPointInternal();

  /// @brief Method GetHashCode, addr 0xec573c, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::DnsEndPoint* New_ctor(::System::Net::IPEndPoint* endPoint);

  static inline ::GlobalNamespace::DnsEndPoint* New_ctor(::StringW hostName, int32_t port);

  /// @brief Method ToString, addr 0xec55c4, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*& __cordl_internal_get__getEndPointTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*> const& __cordl_internal_get__getEndPointTask() const;

  constexpr ::StringW const& __cordl_internal_get_hostName() const;

  constexpr ::StringW& __cordl_internal_get_hostName();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr void __cordl_internal_set__getEndPointTask(::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* value);

  constexpr void __cordl_internal_set_hostName(::StringW value);

  constexpr void __cordl_internal_set_port(int32_t value);

  /// @brief Method .ctor, addr 0xec52ac, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPEndPoint* endPoint);

  /// @brief Method .ctor, addr 0xec40dc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW hostName, int32_t port);

  /// @brief Method get_endPoint, addr 0xec5238, size 0x74, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* get_endPoint();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>* i___System__IEquatable_1___GlobalNamespace__DnsEndPoint__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DnsEndPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DnsEndPoint(DnsEndPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DnsEndPoint(DnsEndPoint const&) = delete;

  /// @brief Field hostName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___hostName;

  /// @brief Field port, offset: 0x18, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field _getEndPointTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* ____getEndPointTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DnsEndPoint, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DnsEndPoint, ___hostName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DnsEndPoint, ___port) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DnsEndPoint, ____getEndPointTask) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DnsEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DnsEndPoint*, "", "DnsEndPoint");
