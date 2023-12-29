#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADObjRef)
namespace System::Runtime::Remoting {
class ObjRef;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADObjRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADObjRef);
// Type: System.Runtime.Remoting.Messaging::CADObjRef
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3152))
// CS Name: ::System.Runtime.Remoting.Messaging::CADObjRef*
class CORDL_TYPE CADObjRef : public ::System::Object {
public:
  // Declarations
  /// @brief Field objref, offset 0x10, size 0x8
  __declspec(property(get = __get_objref, put = __set_objref))::System::Runtime::Remoting::ObjRef* objref;

  /// @brief Field SourceDomain, offset 0x18, size 0x4
  __declspec(property(get = __get_SourceDomain, put = __set_SourceDomain)) int32_t SourceDomain;

  /// @brief Field TypeInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_TypeInfo, put = __set_TypeInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> TypeInfo;

  constexpr ::System::Runtime::Remoting::ObjRef*& __get_objref();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::ObjRef*> const& __get_objref() const;

  constexpr void __set_objref(::System::Runtime::Remoting::ObjRef* value);

  constexpr int32_t& __get_SourceDomain();

  constexpr int32_t const& __get_SourceDomain() const;

  constexpr void __set_SourceDomain(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_TypeInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_TypeInfo() const;

  constexpr void __set_TypeInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Runtime::Remoting::Messaging::CADObjRef* New_ctor(::System::Runtime::Remoting::ObjRef* o, int32_t sourceDomain);

  /// @brief Method .ctor addr 0x234f0ec size 0x48 virtual false final false
  inline void _ctor(::System::Runtime::Remoting::ObjRef* o, int32_t sourceDomain);

  // Ctor Parameters [CppParam { name: "", ty: "CADObjRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADObjRef(CADObjRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADObjRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADObjRef(CADObjRef const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADObjRef();

public:
  /// @brief Field objref, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::ObjRef* ___objref;

  /// @brief Field SourceDomain, offset: 0x18, size: 0x4, def value: None
  int32_t ___SourceDomain;

  /// @brief Field TypeInfo, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___TypeInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADObjRef, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADObjRef, ___objref) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADObjRef, ___SourceDomain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADObjRef, ___TypeInfo) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADObjRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADObjRef*, "System.Runtime.Remoting.Messaging", "CADObjRef");
