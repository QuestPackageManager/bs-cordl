#pragma once
// IWYU pragma private; include "System/Xml/Schema/ParticleContentValidator.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType)>(
    &::System::Xml::Schema::ParticleContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631a6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType, bool)>(
    &::System::Xml::Schema::ParticleContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x631a6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.InitValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::ParticleContentValidator::InitValidation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x631a740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::by_ref<int32_t>)>(
        &::System::Xml::Schema::ParticleContentValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x631a778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::ParticleContentValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x631a7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::Start)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x631a7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.OpenGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::OpenGroup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x631a89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "OpenGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.CloseGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::CloseGroup)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x631a8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "CloseGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.Exists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::ParticleContentValidator::Exists)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x631aa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Exists", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Object*)>(
    &::System::Xml::Schema::ParticleContentValidator::AddName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x631aa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                             { "AddName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddNamespaceList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::NamespaceList*, ::System::Object*)>(
    &::System::Xml::Schema::ParticleContentValidator::AddNamespaceList)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x631abe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                             { "AddNamespaceList", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddLeafNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::SyntaxTreeNode*)>(
    &::System::Xml::Schema::ParticleContentValidator::AddLeafNode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x631aaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddLeafNode", {}, { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddChoice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::AddChoice)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x631ac68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddChoice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::AddSequence)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x631ad44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddSequence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddStar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::AddStar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x631ae20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddStar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::AddPlus)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x631afd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddPlus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddQMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)()>(&::System::Xml::Schema::ParticleContentValidator::AddQMark)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x631b02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddQMark", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.AddLeafRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Decimal, ::System::Decimal)>(
    &::System::Xml::Schema::ParticleContentValidator::AddLeafRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x631b080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                                                           { "AddLeafRange", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.Closure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::InteriorNode*)>(
    &::System::Xml::Schema::ParticleContentValidator::Closure)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x631ae74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Closure", {}, { ::i2c::type_of<::System::Xml::Schema::InteriorNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ContentValidator* (::System::Xml::Schema::ParticleContentValidator::*)(bool)>(
    &::System::Xml::Schema::ParticleContentValidator::Finish)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x631b160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Finish", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.CalculateTotalFollowposForRangeNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::Schema::BitSet*> (::System::Xml::Schema::ParticleContentValidator::*)(
    ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>, ::by_ref<::System::Xml::Schema::BitSet*>)>(
    &::System::Xml::Schema::ParticleContentValidator::CalculateTotalFollowposForRangeNodes)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x631b6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                             { "CalculateTotalFollowposForRangeNodes",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Xml::Schema::BitSet*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.CheckCMUPAWithLeafRangeNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*)>(
    &::System::Xml::Schema::ParticleContentValidator::CheckCMUPAWithLeafRangeNodes)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x631baec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                                                           { "CheckCMUPAWithLeafRangeNodes", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.GetApplicableMinMaxFollowPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::BitSet* (
    ::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(
    &::System::Xml::Schema::ParticleContentValidator::GetApplicableMinMaxFollowPos)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x631b978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                            { "GetApplicableMinMaxFollowPos",
                              {},
                              { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.CheckUniqueParticleAttribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(
    &::System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x631bc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                         { "CheckUniqueParticleAttribution", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.CheckUniqueParticleAttribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ParticleContentValidator::*)(::System::Xml::Schema::BitSet*)>(
    &::System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x631c2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                                                           { "CheckUniqueParticleAttribution", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ParticleContentValidator.BuildTransitionTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<int32_t>> (::System::Xml::Schema::ParticleContentValidator::*)(
    ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>, int32_t)>(&::System::Xml::Schema::ParticleContentValidator::BuildTransitionTable)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x631bcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                         { "BuildTransitionTable", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SymbolsDictionary*& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_symbols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr ::System::Xml::Schema::SymbolsDictionary* const& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_symbols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr void System::Xml::Schema::ParticleContentValidator::__cordl_internal_set_symbols(::System::Xml::Schema::SymbolsDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___symbols = value;
}
constexpr ::System::Xml::Schema::Positions*& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr ::System::Xml::Schema::Positions* const& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr void System::Xml::Schema::ParticleContentValidator::__cordl_internal_set_positions(::System::Xml::Schema::Positions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positions = value;
}
constexpr ::System::Collections::Stack*& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::System::Collections::Stack* const& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void System::Xml::Schema::ParticleContentValidator::__cordl_internal_set_stack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stack = value;
}
constexpr ::System::Xml::Schema::SyntaxTreeNode*& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_contentNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentNode;
}
constexpr ::System::Xml::Schema::SyntaxTreeNode* const& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_contentNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentNode;
}
constexpr void System::Xml::Schema::ParticleContentValidator::__cordl_internal_set_contentNode(::System::Xml::Schema::SyntaxTreeNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentNode = value;
}
constexpr bool& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_isPartial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartial;
}
constexpr bool const& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_isPartial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartial;
}
constexpr void System::Xml::Schema::ParticleContentValidator::__cordl_internal_set_isPartial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPartial = value;
}
constexpr int32_t& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_minMaxNodesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minMaxNodesCount;
}
constexpr int32_t const& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_minMaxNodesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minMaxNodesCount;
}
constexpr void System::Xml::Schema::ParticleContentValidator::__cordl_internal_set_minMaxNodesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minMaxNodesCount = value;
}
constexpr bool& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_enableUpaCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUpaCheck;
}
constexpr bool const& System::Xml::Schema::ParticleContentValidator::__cordl_internal_get_enableUpaCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUpaCheck;
}
constexpr void System::Xml::Schema::ParticleContentValidator::__cordl_internal_set_enableUpaCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableUpaCheck = value;
}
inline void System::Xml::Schema::ParticleContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType);
}
inline void System::Xml::Schema::ParticleContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType, enableUpaCheck);
}
inline void System::Xml::Schema::ParticleContentValidator::InitValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* System::Xml::Schema::ParticleContentValidator::ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context,
                                                                                        ::by_ref<int32_t> errorCode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, context, errorCode);
}
inline bool System::Xml::Schema::ParticleContentValidator::CompleteValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void System::Xml::Schema::ParticleContentValidator::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ParticleContentValidator::OpenGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "OpenGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ParticleContentValidator::CloseGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "CloseGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::ParticleContentValidator::Exists(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Exists", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void System::Xml::Schema::ParticleContentValidator::AddName(::System::Xml::XmlQualifiedName* name, ::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                           { "AddName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, particle);
}
inline void System::Xml::Schema::ParticleContentValidator::AddNamespaceList(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                           { "AddNamespaceList", {}, { ::i2c::type_of<::System::Xml::Schema::NamespaceList*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namespaceList, particle);
}
inline void System::Xml::Schema::ParticleContentValidator::AddLeafNode(::System::Xml::Schema::SyntaxTreeNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddLeafNode", {}, { ::i2c::type_of<::System::Xml::Schema::SyntaxTreeNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Xml::Schema::ParticleContentValidator::AddChoice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddChoice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ParticleContentValidator::AddSequence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddSequence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ParticleContentValidator::AddStar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddStar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ParticleContentValidator::AddPlus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddPlus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ParticleContentValidator::AddQMark() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "AddQMark", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ParticleContentValidator::AddLeafRange(::System::Decimal min, ::System::Decimal max) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                                                         { "AddLeafRange", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline void System::Xml::Schema::ParticleContentValidator::Closure(::System::Xml::Schema::InteriorNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Closure", {}, { ::i2c::type_of<::System::Xml::Schema::InteriorNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ParticleContentValidator::Finish(bool useDFA) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(), { "Finish", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ContentValidator*>(this, ___internal_method, useDFA);
}
inline ::ArrayW<::System::Xml::Schema::BitSet*> System::Xml::Schema::ParticleContentValidator::CalculateTotalFollowposForRangeNodes(::System::Xml::Schema::BitSet* firstpos,
                                                                                                                                    ::ArrayW<::System::Xml::Schema::BitSet*> followpos,
                                                                                                                                    ::by_ref<::System::Xml::Schema::BitSet*> posWithRangeTerminals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                           { "CalculateTotalFollowposForRangeNodes",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Xml::Schema::BitSet*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::BitSet*>>(this, ___internal_method, firstpos, followpos, posWithRangeTerminals);
}
inline void System::Xml::Schema::ParticleContentValidator::CheckCMUPAWithLeafRangeNodes(::System::Xml::Schema::BitSet* curpos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                                                         { "CheckCMUPAWithLeafRangeNodes", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curpos);
}
inline ::System::Xml::Schema::BitSet* System::Xml::Schema::ParticleContentValidator::GetApplicableMinMaxFollowPos(::System::Xml::Schema::BitSet* curpos,
                                                                                                                  ::System::Xml::Schema::BitSet* posWithRangeTerminals,
                                                                                                                  ::ArrayW<::System::Xml::Schema::BitSet*> minmaxFollowPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                          { "GetApplicableMinMaxFollowPos",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::BitSet*>(this, ___internal_method, curpos, posWithRangeTerminals, minmaxFollowPos);
}
inline void System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                       { "CheckUniqueParticleAttribution", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstpos, followpos);
}
inline void System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* curpos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                                                                                         { "CheckUniqueParticleAttribution", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curpos);
}
inline ::ArrayW<::ArrayW<int32_t>> System::Xml::Schema::ParticleContentValidator::BuildTransitionTable(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos,
                                                                                                       int32_t endMarkerPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::ParticleContentValidator*>(),
                       { "BuildTransitionTable", {}, { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<int32_t>>>(this, ___internal_method, firstpos, followpos, endMarkerPos);
}
inline ::System::Xml::Schema::ParticleContentValidator* System::Xml::Schema::ParticleContentValidator::New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ParticleContentValidator*>(contentType));
}
inline ::System::Xml::Schema::ParticleContentValidator* System::Xml::Schema::ParticleContentValidator::New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ParticleContentValidator*>(contentType, enableUpaCheck));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ParticleContentValidator::ParticleContentValidator() {}
