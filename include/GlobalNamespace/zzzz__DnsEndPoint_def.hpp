#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DnsEndPoint)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Object;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
template <typename T> class IEquatable_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12650))
// CS Name: ::DnsEndPoint*
class CORDL_TYPE DnsEndPoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field hostName, offset 0x10, size 0x8
  __declspec(property(get = __get_hostName, put = __set_hostName))::StringW hostName;

  /// @brief Field port, offset 0x18, size 0x4
  __declspec(property(get = __get_port, put = __set_port)) int32_t port;

  /// @brief Field _getEndPointTask, offset 0x20, size 0x8
  __declspec(property(get = __get__getEndPointTask, put = __set__getEndPointTask))::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* _getEndPointTask;

  __declspec(property(get = get_endPoint))::System::Net::IPEndPoint* endPoint;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*() noexcept;

  constexpr ::StringW& __get_hostName();

  constexpr ::StringW const& __get_hostName() const;

  constexpr void __set_hostName(::StringW value);

  constexpr int32_t& __get_port();

  constexpr int32_t const& __get_port() const;

  constexpr void __set_port(int32_t value);

  constexpr ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*& __get__getEndPointTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*> const& __get__getEndPointTask() const;

  constexpr void __set__getEndPointTask(::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* value);

  /// @brief Method get_endPoint addr 0xdadb74 size 0x74 virtual false final false
  inline ::System::Net::IPEndPoint* get_endPoint();

  static inline ::GlobalNamespace::DnsEndPoint* New_ctor(::StringW hostName, int32_t port);

  /// @brief Method .ctor addr 0xdaca04 size 0x30 virtual false final false
  inline void _ctor(::StringW hostName, int32_t port);

  static inline ::GlobalNamespace::DnsEndPoint* New_ctor(::System::Net::IPEndPoint* endPoint);

  /// @brief Method .ctor addr 0xdadbe8 size 0xb4 virtual false final false
  inline void _ctor(::System::Net::IPEndPoint* endPoint);

  /// @brief Method GetEndPointAsync addr 0xdadc9c size 0x120 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* GetEndPointAsync(::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method GetEndPoint addr 0xdaddbc size 0x94 virtual false final false
  inline ::System::Net::IPEndPoint* GetEndPoint();

  /// @brief Method GetEndPointInternal addr 0xdade50 size 0xb0 virtual false final false
  inline ::System::Net::IPEndPoint* GetEndPointInternal();

  /// @brief Method ToString addr 0xdadf00 size 0x8c virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0xdadf8c size 0xa0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xdae02c size 0x4c virtual true final true
  inline bool Equals(::GlobalNamespace::DnsEndPoint* other);

  /// @brief Method GetHashCode addr 0xdae078 size 0x2c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DnsEndPoint(DnsEndPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DnsEndPoint(DnsEndPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DnsEndPoint();

public:
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
