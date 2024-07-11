#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ArgInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArgInfo)
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
struct ArgInfoType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ArgInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ArgInfo);
// Type: System.Runtime.Remoting.Messaging::ArgInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::ArgInfo*
class CORDL_TYPE ArgInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inoutArgCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__inoutArgCount, put = __cordl_internal_set__inoutArgCount)) int32_t _inoutArgCount;

  /// @brief Field _method, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__method, put = __cordl_internal_set__method))::System::Reflection::MethodBase* _method;

  /// @brief Field _paramMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__paramMap, put = __cordl_internal_set__paramMap))::ArrayW<int32_t, ::Array<int32_t>*> _paramMap;

  /// @brief Method GetInOutArgs, addr 0x28549b4, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetInOutArgs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::System::Runtime::Remoting::Messaging::ArgInfo* New_ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type);

  constexpr int32_t const& __cordl_internal_get__inoutArgCount() const;

  constexpr int32_t& __cordl_internal_get__inoutArgCount();

  constexpr ::System::Reflection::MethodBase*& __cordl_internal_get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __cordl_internal_get__method() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__paramMap() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__paramMap();

  constexpr void __cordl_internal_set__inoutArgCount(int32_t value);

  constexpr void __cordl_internal_set__method(::System::Reflection::MethodBase* value);

  constexpr void __cordl_internal_set__paramMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x2854800, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgInfo(ArgInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgInfo(ArgInfo const&) = delete;

  /// @brief Field _paramMap, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____paramMap;

  /// @brief Field _inoutArgCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____inoutArgCount;

  /// @brief Field _method, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ArgInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ArgInfo, ____paramMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ArgInfo, ____inoutArgCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ArgInfo, ____method) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ArgInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ArgInfo*, "System.Runtime.Remoting.Messaging", "ArgInfo");
